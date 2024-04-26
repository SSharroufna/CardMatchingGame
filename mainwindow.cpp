#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "numplayersdialog.h"
#include "playernamesdialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Dialog to enter number of players
    numPlayers = new NumPlayersDialog();
    numPlayers->exec();

    qDebug() << numPlayers->getNumPlayers();

    PlayerNamesDialog playerNamesDialog(this, numPlayers->getNumPlayers());
    playerNamesDialog.exec();

    // Setting up the graphics view and scene
    QGraphicsView *view = new QGraphicsView(this);
    scene = new QGraphicsScene(this);
    view->setScene(scene);
    setCentralWidget(view);

    // Load card images and create pixmap items
    // A QVector<QPixmap> containing card images
    QVector<QPixmap> cardImages;

    // Load a single card image
    QPixmap cardImage("Users/Download/Card1.png");

    // Add the single card image to the QVector<QPixmap>
    cardImages.append(cardImage);

    // Populate cardImages
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 2; ++j) {
            int randomIndex = QRandomGenerator::global()->bounded(cardImages.size());
            QPixmap cardPixmap = cardImages.takeAt(randomIndex);
            QGraphicsPixmapItem *cardItem = new QGraphicsPixmapItem(cardPixmap);
            cardItem->setPos(i * 100, j * 150); //Position in the UI
            scene->addItem(cardItem);
            cards.append(cardItem);
        }
    }

    // Connect signals and slots
    connect(scene, &QGraphicsScene::selectionChanged, this, &MainWindow::handleCardClick);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleCardClick()
{
    QList<QGraphicsItem*> selectedItems = scene->selectedItems();
    if (selectedItems.size() == 2) {
        QGraphicsPixmapItem *firstCard = qgraphicsitem_cast<QGraphicsPixmapItem*>(selectedItems.at(0));
        QGraphicsPixmapItem *secondCard = qgraphicsitem_cast<QGraphicsPixmapItem*>(selectedItems.at(1));
        if (firstCard && secondCard) {
            // Check if cards match
            if (firstCard->pixmap().toImage() == secondCard->pixmap().toImage()) {
                qDebug() << "Match!";

            } else {
                qDebug() << "Not a match!";

            }
        }
        scene->clearSelection();
    }
}
