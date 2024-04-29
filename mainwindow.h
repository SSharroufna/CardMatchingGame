#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "numplayersdialog.h"
#include "playernamesdialog.h"
#include "player.h"
#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <QRandomGenerator>
#include <QVector>
#include <QDebug>
#include "cardprototype.h"
#include "difficultydialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void handleCardClick();
    void populateSceneWithCards();

private:
    CardPrototypeFactory cardFactory;
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QVector<QGraphicsPixmapItem*> cards;
    int gameDifficulty;

    //Initializing players
    QVector<Player> players;
    int currPlayerIndex;

    // a map to associate each card item with its card type
    QMap<QGraphicsPixmapItem*, CardPrototypeFactory::CardType> cardTypesMap;

    // Declare a map to associate each card item with its card back item
    QMap<QGraphicsPixmapItem*, QGraphicsPixmapItem*> cardBacks;


};
#endif // MAINWINDOW_H
