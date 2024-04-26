#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "numplayersdialog.h"
#include "playernamesdialog.h"
#include <QString>
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Dialog to enter number of players
    numPlayers = new NumPlayersDialog();
    numPlayers->exec();

    qDebug() << numPlayers->getNumPlayers();

    //Dialog for players to input names
    PlayerNamesDialog playerNamesDialog(this, numPlayers->getNumPlayers());
    playerNamesDialog.exec();

    //Initialize players and store them in vector
    for (QString name : playerNamesDialog.getPlayers()){
        Player player(name);
        qDebug() << "Player" << name << "was made";
        players.append(player);
    }

    // Setting up the graphics view and scene
    scene = new QGraphicsScene(this);
    ui->scene->setScene(scene);
    //setCentralWidget(scene);

    // // Load card images and create pixmap items
    // A QVector<QPixmap> containing card images
    // QVector<QPixmap> cardImages;

    // Load card images and create pixmap items
    QVector<QPixmap> cardImages;

    // Load a single card image,
    QPixmap cardImage("/Users/sarah/Downloads/Card1.png");

    // Resize the card image
    cardImage = cardImage.scaledToWidth(50);

    // Add the single card image to the QVector<QPixmap>
    cardImages.append(cardImage);

    qDebug() << "Number of card images available:" << cardImages.size();

    // Populate cardImages
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            if (!cardImages.isEmpty()) {
                QPixmap cardPixmap = cardImages.first();

                QGraphicsPixmapItem *cardItem = new QGraphicsPixmapItem(cardPixmap);
                cardItem->setPos(i * 100, j * 90); //Position in the UI
                cardItem->setFlag(QGraphicsItem::ItemIsSelectable);
                scene->addItem(cardItem);
                cards.append(cardItem);
            }
        }
    }

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

    // QList<QGraphicsItem*> selectedItems = scene->selectedItems();
    // if (selectedItems.size() == 2) {
    //     QGraphicsPixmapItem *firstCard = qgraphicsitem_cast<QGraphicsPixmapItem*>(selectedItems.at(0));
    //     QGraphicsPixmapItem *secondCard = qgraphicsitem_cast<QGraphicsPixmapItem*>(selectedItems.at(1));
    //     if (firstCard && secondCard) {
    //         // Check if cards match
    //         if (firstCard->pixmap().toImage() == secondCard->pixmap().toImage()) {
    //             qDebug() << "Match!";
    //         } else {
    //             qDebug() << "Not a match!";
    //         }
    //     }
    //     scene->clearSelection();
    // }
}
