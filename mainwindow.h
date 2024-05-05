#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "numplayersdialog.h"
#include "playernamesdialog.h"
#include "player.h"
#include "cardprototype.h"
#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <QRandomGenerator>
#include <QVector>
#include <QDebug>
#include "cardprototype.h"
#include "difficultydialog.h"
#include "cardPrototype.h"
#include <QTimer>
#include <QLCDNumber>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void startBtn_clicked();
    void updateCountdown();
    Ui::MainWindow *ui;

private slots:
    void handleCardClick();
    void onSelectionChanged();
    void populateSceneWithCards();

    void on_startGameBtn_clicked();
    void on_startTurnBtn_clicked();
    void on_quitGameBtn_clicked();

    void disableAllCards(bool selectable);
    void updateScoreboard();
    void updateUserData();

    void on_timerCardDoubleClicked();
    void on_glancerCardDoubleClicked();

private:
    //Instances
    CardPrototypeFactory factory;

    //Scenes
    CardPrototypeFactory cardFactory;
    QGraphicsScene *scene;
    QGraphicsScene *boosterScene;

    //Games setting
    int gameDifficulty;
    int numberOfCards;

    //Initializing players
    QVector<Player> players;
    int currPlayerIndex;

    //Timer
    QTimer *countdownTimer;
    QLCDNumber *lcdNumber;
    int countdownValue = 10;

    // a map to associate each card item with its card type
    QMap<QGraphicsPixmapItem*, CardPrototypeFactory::CardType> cardTypesMap;
    QString cardTypeToString(CardPrototypeFactory::CardType cardType) const;
    QList<QGraphicsItem*> selectedItems;
};

#endif // MAINWINDOW_H
