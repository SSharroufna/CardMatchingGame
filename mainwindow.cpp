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
#include <algorithm> // Include for std::shuffle
#include <random>    // Include for std::mt19937

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


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

    gameDifficulty = diffDialog.getDifficulty();


    switch (gameDifficulty){
        case 1:
            qDebug() << "Green Box";
            ui->difficultyBox->setStyleSheet("background-color : green");
            ui->difficultyLabel->setText("Beginner");
            break;
        case 2:
            qDebug() << "Orange Box";
            ui->difficultyBox->setStyleSheet("background-color : orange");
            ui->difficultyLabel->setText("Intermediate");
            break;
        case 3:
            qDebug() << "Red Box";
            ui->difficultyBox->setStyleSheet("background-color : red");
            ui->difficultyLabel->setText("Expert");
            break;
    }



    // Setting up the graphics view and scene
    scene = new QGraphicsScene(this);
    ui->scene->setScene(scene);
    //setCentralWidget(scene);

    populateSceneWithCards();

    //Connect signals and slots
    connect(scene, &QGraphicsScene::selectionChanged, this, &MainWindow::handleCardClick);



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleCardClick()
{
    qDebug() << "Card clicked!";


    // Get the selected items
    QList<QGraphicsItem*> selectedItems = scene->selectedItems();

    // If exactly one item is selected
    if (selectedItems.size() == 2) {
        qDebug() << "Two cards chosen !";

        QGraphicsPixmapItem *firstCard = qgraphicsitem_cast<QGraphicsPixmapItem*>(selectedItems.at(0));
        QGraphicsPixmapItem *secondCard = qgraphicsitem_cast<QGraphicsPixmapItem*>(selectedItems.at(1));

        if (firstCard && secondCard) {
            // Handle the selection of the two cards
        }

    }
}

void MainWindow::populateSceneWithCards() {

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


    // Resize the card types vector to contain half the number of cards you want
    cardTypes.resize(36 / 2);

    // Duplicate the card types to ensure each card has a pair
    cardTypes += cardTypes;

    // Load the card back image
    QPixmap cardBackImage("/Users/sarah/Downloads/images/back.png");

    // Populate the scene with cards
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            if (!cardTypes.isEmpty()) {
                int randomIndex = QRandomGenerator::global()->bounded(cardTypes.size());

                // Use the prototype factory to create a new card prototype object
                CardPrototype* cardPrototype = cardFactory.createPrototype(cardTypes[randomIndex]);

                // Clone the prototype to create a new card
                CardPrototype* newCard = cardPrototype->clone();

                QGraphicsPixmapItem *cardItem = new QGraphicsPixmapItem(newCard->image());
                cardItem->setPos(i * 120, j * 110); // Position in the UI
                cardItem->setFlag(QGraphicsItem::ItemIsSelectable);
                cardItem->setScale(0.2);
                cardItem->setZValue(0);
                scene->addItem(cardItem);
                cards.append(cardItem);

                // Store the card type for each card item
                cardTypesMap.insert(cardItem, cardTypes[randomIndex]);


                // // Create QGraphicsPixmapItem for the card back image
                // QGraphicsPixmapItem *cardBackItem = new QGraphicsPixmapItem(cardBackImage);
                // cardBackItem->setPos(i * 120, j * 110); // Position in the UI
                // cardBackItem->setScale(0.2);
                // cardBackItem->setZValue(1);
                // scene->addItem(cardBackItem);

                // // Associate the card item with its corresponding card back item
                // cardBacks.insert(cardItem, cardBackItem);

                // Clean up the prototype object
                delete cardPrototype;

                // Remove the used card type from the vector to avoid duplicates
                cardTypes.remove(randomIndex);
            }
        }
    }
}


