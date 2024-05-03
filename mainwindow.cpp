#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "numplayersdialog.h"
#include "playernamesdialog.h"
#include "difficultydialog.h"
#include <QString>
#include <QDebug>
#include <QDir>
#include <QRandomGenerator>
#include <QTime>
#include <QTimer>
#include <algorithm> // Include for std::shuffle
#include <random>    // Include for std::mt19937
#include <QTableWidgetItem>
#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Card Match");

    //Dialog to enter number of players
    NumPlayersDialog numPlayers;
    numPlayers.exec();

    //Dialog for players to input names
    PlayerNamesDialog playerNamesDialog(this, numPlayers.getNumPlayers());
    playerNamesDialog.exec();

    //Initialize players and store them in vector
    for (QString name : playerNamesDialog.getPlayers()){
        Player player(name);
        qDebug() << "Player" << name << "was made";
        players.append(player);
    }
   
    //Dialog for game difficulty
    DifficultyDialog diffDialog;
    diffDialog.exec();

    //Display game difficulty in MainWindow
    //Changes color based on selected difficulty
    //so it's easy to distinguish
    gameDifficulty = diffDialog.getDifficulty();

    switch (gameDifficulty){
        case 1:
            qDebug() << "Green Box for Beginner";
            ui->difficultyLabel->setText("Beginner");
            ui->difficultyLabel->setStyleSheet("background-color : green;"
                                                "border-top-left-radius : 5px;" "border-top-right-radius : 5px;"
                                               "border-bottom-left-radius : 5px;" "border-bottom-right-radius : 5px;");
            numberOfCards = 4;
            break;
        case 2:
            qDebug() << "Orange Box for Intermediate";;
            ui->difficultyLabel->setText("Intermediate");
            ui->difficultyLabel->setStyleSheet("background-color : orange;"
                                               "border-top-left-radius : 5px;" "border-top-right-radius : 5px;"
                                               "border-bottom-left-radius : 5px;" "border-bottom-right-radius : 5px;");
            numberOfCards = 5;
            break;
        case 3:
            qDebug() << "Red Box for Expert";
            ui->difficultyLabel->setText("Expert");
            ui->difficultyLabel->setStyleSheet("background-color : red;"
                                               "border-top-left-radius : 5px;" "border-top-right-radius : 5px;"
                                               "border-bottom-left-radius : 5px;" "border-bottom-right-radius : 5px;");
            numberOfCards = 6;
            break;
    }

    //Display stuff
    ui->timeUp->setVisible(false);
    ui->timeUp->setStyleSheet("color : red");

    //Initialize currPlayerIndex
    currPlayerIndex = 0;

    // Setting up the graphics scene
    scene = new QGraphicsScene(this);
    ui->scene->setScene(scene);

    // Setting up the Booster scene
    boosterScene = new QGraphicsScene(this);
    ui->boosterScene->setScene(boosterScene);

    populateSceneWithCards();

    //Set up timer
    lcdNumber = ui->timerDisplay;
    ui->startTurnBtn->setEnabled(false);
    ui->boosterBtn->setEnabled(false);

    //Set up scoreboard
    ui->scoreboardTable->setStyleSheet("color : white;" "background-color: rgb(89, 46, 143);" "border-top-left-radius : 5px;"
                                       "border-top-right-radius : 5px;" "border-bottom-left-radius : 5px;" "border-bottom-right-radius : 5px;");
    ui->scoreboardTable->setRowCount(players.size());
    ui->scoreboardTable->setColumnCount(2);
    ui->scoreboardTable->setColumnWidth(0, 144);
    ui->scoreboardTable->horizontalHeader()->hide();

    updateScoreboard();

    //Connect signals and slots
    connect(scene, &QGraphicsScene::selectionChanged, this, &MainWindow::handleCardClick);
    // connect(ui->startGameBtn, &QAbstractButton::pressed, this, &MainWindow::startBtn_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Slot implementation in MainWindow
void MainWindow::on_timerCardDoubleClicked() {
    qDebug() << "Extra time card double clicked";
    // Add 10 seconds to the countdown timer
    countdownValue += 10;
    // Update the countdown display if necessary
    lcdNumber->display(countdownValue);
}

void MainWindow::updateScoreboard(){

    for (int i = 0; i < players.size(); i++){
        ui->scoreboardTable->setItem(i, 0, new QTableWidgetItem(players[i].getName()));
        ui->scoreboardTable->setItem(i, 1, new QTableWidgetItem(players[i].getScore()));
    }

    //Sorts the table and puts the person with the highest score at the top
    Qt::SortOrder order = Qt::DescendingOrder;
    ui->scoreboardTable->sortItems(1, order);
    ui->scoreboardTable->resizeColumnToContents(1);
}

void MainWindow::updateUserData(){
    //set matched pair
    players[currPlayerIndex].setMatchedPair(players[currPlayerIndex].getMatchedPairs());
    QString strPair = QString::number(players[currPlayerIndex].getMatchedPairs());
    ui->matchesLabel->setText(strPair);

    //set moves
     players[currPlayerIndex].setMoves(players[currPlayerIndex].getMoves());
    QString strMoves = QString::number(players[currPlayerIndex].getMoves()/2);
    ui->moves_label->setText(strMoves);

     //set score
     players[currPlayerIndex].setScore(players[currPlayerIndex].getScore());
    QString strScore = QString::number(players[currPlayerIndex].getScore());
    ui->score_label->setText(strScore);
}

void MainWindow::handleCardClick()
{
    qDebug() << "Card clicked!";

    //Increment moves made for player per pair chosen
    players[currPlayerIndex].incrementMoves();

    // Collect the selected item on the scene
    foreach (QGraphicsItem* item, scene->selectedItems()) {
        Card* card = dynamic_cast<Card*>(item);
        if (card) {
            selectedItems.append(card);
            card->toggle();
        }
    }

    qDebug() << "Number of selected items:" << selectedItems.size();

    if (selectedItems.size() == 2) {
        //qDebug() << "Two cards chosen!";

        // Retrieve the front images of the selected cards
        Card *firstCard = dynamic_cast<Card*>(selectedItems.at(0));
        Card *secondCard = dynamic_cast<Card*>(selectedItems.at(1));

        // Retrieve the card types of the selected cards
        CardPrototypeFactory::CardType firstCardType = cardTypesMap[firstCard];
        CardPrototypeFactory::CardType secondCardType = cardTypesMap[secondCard];

        // Check if the cards are different and have the same type
        if (firstCard != secondCard && firstCardType == secondCardType) {
            qDebug() << "Matching cards!";
            firstCard->setPoints(firstCard->points());
            qDebug() << "firstCard point " << firstCard->points();
            players[currPlayerIndex].incrementMatchedPairs();
            players[currPlayerIndex].increaseScore(firstCard->points() *2);
            updateUserData();

            // Remove the matching pair from the scene
            QTimer::singleShot(500,this, [=]() { scene->removeItem(firstCard); });
            QTimer::singleShot(500,this,[=]() { scene->removeItem(secondCard); });

        } else {
           //qDebug() << "Non-matching cards!";
            QTimer::singleShot(500,this, [=]() { firstCard->toggle(); });
            QTimer::singleShot(500, this, [=]() { secondCard->toggle(); });
        }
        selectedItems.clear();
    }

    updateUserData();
    updateScoreboard();
}

void MainWindow::populateSceneWithCards() {

    scene->clear();

    QVector<CardPrototypeFactory::CardType> cardTypes = {
         CardPrototypeFactory::boy,
         CardPrototypeFactory::computer,
         CardPrototypeFactory::openBox,
         CardPrototypeFactory::closedBox,
         CardPrototypeFactory::target,
         CardPrototypeFactory::gem,
         CardPrototypeFactory::board,
         CardPrototypeFactory::piano,
         CardPrototypeFactory::bag,
         CardPrototypeFactory::speaker,
         CardPrototypeFactory::game,
         CardPrototypeFactory::clock,
         CardPrototypeFactory::map
        };

    // Resize the card types vector to contain half the number of cards
    cardTypes.resize((numberOfCards*numberOfCards) / 2);

    // Duplicate the card types to ensure each card has a pair
    cardTypes += cardTypes;

    // Populate the scene with cards
    for (int i = 0; i < numberOfCards; ++i) {
        for (int j = 0; j < numberOfCards; ++j) {
            if (!cardTypes.isEmpty()) {
                int randomIndex = QRandomGenerator::global()->bounded(cardTypes.size());

                // Use the prototype factory to create a new card prototype object
               Card* cardPrototype = CardPrototypeFactory::createPrototype(cardTypes[randomIndex]);

                // Cast the prototype to Card
                Card* newCard = dynamic_cast<Card*>(cardPrototype);

                // Check if the cast was successful
                if (newCard) {
                    // Set up the card's position and properties
                    newCard->setPos(i * 120, j * 110);
                    newCard->setFlag(QGraphicsItem::ItemIsSelectable, true);
                    newCard->setScale(0.2);

                    // Add the card to the scene
                    scene->addItem(newCard);
                    // Store the card type for each card item
                    cardTypesMap.insert(newCard, cardTypes[randomIndex]);
                }

                // Remove the used card type from the vector to avoid duplicates
                cardTypes.remove(randomIndex);
            }
        }
    }

    Card* glancerCard = CardPrototypeFactory::createPrototype(CardPrototypeFactory::glancer);
    glancerCard->setScale(0.15);
    glancerCard->setPos(0 * 120, 0 * 110);
    glancerCard->setFlag(QGraphicsItem::ItemIsSelectable);
    boosterScene->addItem(glancerCard);

    Card* doubleCard = CardPrototypeFactory::createPrototype(CardPrototypeFactory::doublePoint);
    doubleCard->setScale(0.15);
    doubleCard->setPos(0.7 * 120, 0 * 110);
    doubleCard->setFlag(QGraphicsItem::ItemIsSelectable);
    boosterScene->addItem(doubleCard);

    Card* extraTimeCard = CardPrototypeFactory::createPrototype(CardPrototypeFactory::extraTime);
    extraTimeCard->setScale(0.15);
    extraTimeCard->setPos(1.4 * 120, 0 * 110);
    extraTimeCard->setFlag(QGraphicsItem::ItemIsSelectable);
    boosterScene->addItem(extraTimeCard);
}

void MainWindow::on_startGameBtn_clicked(){
    ui->timeUp->setVisible(false);
    qDebug() << "Start game button clicked";

    ui->gameStatusDisplay->setText(players[currPlayerIndex].getName());
    qDebug() << "Player " << players[currPlayerIndex].getName() << "'s turn";

    //Starts a new timer at the beginning of first turn
    countdownValue = 10;

    countdownTimer = new QTimer(this);
    connect(countdownTimer, &QTimer::timeout, this, &MainWindow::updateCountdown);
    countdownTimer->start(1000);

    //Disable startGameBtn once game is initialized, for the rest of the game
    ui->startGameBtn->setEnabled(false);
}

void MainWindow::updateCountdown(){
    if (countdownValue >= 0){
        lcdNumber->display(countdownValue);
        countdownValue--;
        ui->startGameBtn->setEnabled(false);
        ui->startTurnBtn->setEnabled(false);
        ui->boosterBtn->setEnabled(true);
    }
    else {
        countdownTimer->stop();
        qDebug() << "Timer stopped";
        //When timer stops, playerIndex updates and moves to next player's turn
        currPlayerIndex = (currPlayerIndex + 1) % players.size();
        ui->startTurnBtn->setEnabled(true);
        ui->boosterBtn->setEnabled(false);
        delete countdownTimer;

        ui->timeUp->setVisible(true);
        //We can add something here so that the player cannot interact/click
        //cards after their turn ends. AKA when the timer runs out
        disableAllCards();
    }
}

void MainWindow::on_startTurnBtn_clicked(){
    ui->timeUp->setVisible(false);
    qDebug() << "Start turn button clicked";

    populateSceneWithCards();

    ui->gameStatusDisplay->setText(players[currPlayerIndex].getName());
    qDebug() << "Player " << players[currPlayerIndex].getName() << "'s turn";

    //Starts a new timer at the beginning of each new turn
    countdownValue = 10;

    countdownTimer = new QTimer(this);
    connect(countdownTimer, &QTimer::timeout, this, &MainWindow::updateCountdown);
    countdownTimer->start(1000);
}

void MainWindow::on_quitGameBtn_clicked()
{
    qDebug() << "Quit Button Clicked";
}

QString MainWindow::cardTypeToString(CardPrototypeFactory::CardType cardType) const {
    switch(cardType) {
    case CardPrototypeFactory::boy:
        return "Boy";
    case CardPrototypeFactory::computer:
        return "Computer";
    case CardPrototypeFactory::openBox:
        return "Open Box";
    case CardPrototypeFactory::clock:
        return "Clock";
    case CardPrototypeFactory::closedBox:
        return "Close Box";
    case CardPrototypeFactory::map:
        return "Map";
    case CardPrototypeFactory::target:
        return "Target";
    case CardPrototypeFactory::gem:
        return "Gem";
    case CardPrototypeFactory::piano:
        return "Piano";
    case CardPrototypeFactory::board:
        return "Board";
    case CardPrototypeFactory::speaker:
        return "Speaker";
    case CardPrototypeFactory::game:
        return "Game";
    default:
        return "Unknown";
    }
}

void MainWindow::disableAllCards(){

    QList<QGraphicsItem*> items = scene->items();
    for (QGraphicsItem* item : items) {
        if (!item->isSelected()) {
            item->setSelected(true);
        }
    }

    for (QGraphicsItem* item : items) {
        Card* card = dynamic_cast<Card*>(item);
        if (card) {
            card->setFlag(QGraphicsItem::ItemIsSelectable, false);
            card->setEnabled(false);
        }
    }
    items.clear();
    selectedItems.clear();
}
