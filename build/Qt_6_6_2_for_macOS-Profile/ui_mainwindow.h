/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *scene;
    QPushButton *startGameBtn;
    QPushButton *newGameBtn;
    QLabel *timerLabel;
    QPushButton *quitGameBtn;
    QLCDNumber *timerDisplay;
    QGroupBox *difficultyBox;
    QLabel *difficultyLabel;
    QGroupBox *movesBox;
    QLabel *moves_label;
    QGroupBox *scoreBox;
    QLabel *score_label;
    QGroupBox *playerBox;
    QLabel *gameStatusDisplay;
    QGroupBox *scoreboardBox;
    QListWidget *scoreboardList;
    QGroupBox *boosterBox;
    QPushButton *startTurnBtn;
    QPushButton *boosterBtn;
    QLabel *timeUp;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1342, 829);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        scene = new QGraphicsView(centralwidget);
        scene->setObjectName("scene");
        scene->setGeometry(QRect(260, 20, 821, 701));
        startGameBtn = new QPushButton(centralwidget);
        startGameBtn->setObjectName("startGameBtn");
        startGameBtn->setGeometry(QRect(129, 580, 91, 32));
        newGameBtn = new QPushButton(centralwidget);
        newGameBtn->setObjectName("newGameBtn");
        newGameBtn->setGeometry(QRect(20, 580, 91, 32));
        timerLabel = new QLabel(centralwidget);
        timerLabel->setObjectName("timerLabel");
        timerLabel->setGeometry(QRect(1100, 170, 101, 51));
        QFont font;
        font.setPointSize(35);
        font.setBold(true);
        font.setItalic(true);
        timerLabel->setFont(font);
        quitGameBtn = new QPushButton(centralwidget);
        quitGameBtn->setObjectName("quitGameBtn");
        quitGameBtn->setGeometry(QRect(20, 610, 201, 32));
        timerDisplay = new QLCDNumber(centralwidget);
        timerDisplay->setObjectName("timerDisplay");
        timerDisplay->setGeometry(QRect(1210, 170, 101, 51));
        difficultyBox = new QGroupBox(centralwidget);
        difficultyBox->setObjectName("difficultyBox");
        difficultyBox->setGeometry(QRect(20, 110, 201, 80));
        QFont font1;
        font1.setPointSize(25);
        font1.setBold(true);
        font1.setItalic(true);
        difficultyBox->setFont(font1);
        difficultyBox->setAutoFillBackground(true);
        difficultyBox->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        difficultyBox->setFlat(false);
        difficultyLabel = new QLabel(difficultyBox);
        difficultyLabel->setObjectName("difficultyLabel");
        difficultyLabel->setGeometry(QRect(0, 35, 201, 45));
        QFont font2;
        font2.setPointSize(25);
        font2.setBold(true);
        font2.setItalic(false);
        difficultyLabel->setFont(font2);
        difficultyLabel->setAlignment(Qt::AlignCenter);
        movesBox = new QGroupBox(centralwidget);
        movesBox->setObjectName("movesBox");
        movesBox->setGeometry(QRect(1110, 260, 191, 80));
        movesBox->setFont(font1);
        movesBox->setAlignment(Qt::AlignCenter);
        moves_label = new QLabel(movesBox);
        moves_label->setObjectName("moves_label");
        moves_label->setGeometry(QRect(0, 35, 191, 42));
        moves_label->setFont(font1);
        moves_label->setAlignment(Qt::AlignCenter);
        scoreBox = new QGroupBox(centralwidget);
        scoreBox->setObjectName("scoreBox");
        scoreBox->setGeometry(QRect(1110, 350, 191, 80));
        scoreBox->setFont(font1);
        scoreBox->setAlignment(Qt::AlignCenter);
        score_label = new QLabel(scoreBox);
        score_label->setObjectName("score_label");
        score_label->setGeometry(QRect(0, 35, 191, 42));
        score_label->setFont(font1);
        score_label->setAlignment(Qt::AlignCenter);
        playerBox = new QGroupBox(centralwidget);
        playerBox->setObjectName("playerBox");
        playerBox->setGeometry(QRect(1110, 60, 191, 80));
        playerBox->setFont(font1);
        playerBox->setAlignment(Qt::AlignCenter);
        gameStatusDisplay = new QLabel(playerBox);
        gameStatusDisplay->setObjectName("gameStatusDisplay");
        gameStatusDisplay->setGeometry(QRect(0, 35, 191, 42));
        gameStatusDisplay->setFont(font2);
        gameStatusDisplay->setAlignment(Qt::AlignCenter);
        scoreboardBox = new QGroupBox(centralwidget);
        scoreboardBox->setObjectName("scoreboardBox");
        scoreboardBox->setGeometry(QRect(20, 220, 201, 211));
        scoreboardBox->setFont(font1);
        scoreboardBox->setAutoFillBackground(true);
        scoreboardBox->setAlignment(Qt::AlignCenter);
        scoreboardBox->setFlat(false);
        scoreboardList = new QListWidget(scoreboardBox);
        scoreboardList->setObjectName("scoreboardList");
        scoreboardList->setGeometry(QRect(0, 34, 201, 181));
        scoreboardList->setSortingEnabled(true);
        boosterBox = new QGroupBox(centralwidget);
        boosterBox->setObjectName("boosterBox");
        boosterBox->setGeometry(QRect(1110, 460, 191, 80));
        boosterBox->setFont(font1);
        boosterBox->setAlignment(Qt::AlignCenter);
        startTurnBtn = new QPushButton(centralwidget);
        startTurnBtn->setObjectName("startTurnBtn");
        startTurnBtn->setGeometry(QRect(1110, 610, 191, 32));
        boosterBtn = new QPushButton(centralwidget);
        boosterBtn->setObjectName("boosterBtn");
        boosterBtn->setGeometry(QRect(1149, 560, 111, 32));
        timeUp = new QLabel(centralwidget);
        timeUp->setObjectName("timeUp");
        timeUp->setGeometry(QRect(1120, 230, 171, 31));
        QFont font3;
        font3.setPointSize(28);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setUnderline(true);
        timeUp->setFont(font3);
        timeUp->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1342, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        startGameBtn->setText(QCoreApplication::translate("MainWindow", "Start Game", nullptr));
        newGameBtn->setText(QCoreApplication::translate("MainWindow", "New Game", nullptr));
        timerLabel->setText(QCoreApplication::translate("MainWindow", "Timer", nullptr));
        quitGameBtn->setText(QCoreApplication::translate("MainWindow", "Quit Game", nullptr));
        difficultyBox->setTitle(QCoreApplication::translate("MainWindow", "Difficulty", nullptr));
        difficultyLabel->setText(QString());
        movesBox->setTitle(QCoreApplication::translate("MainWindow", "Moves Made", nullptr));
        moves_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        scoreBox->setTitle(QCoreApplication::translate("MainWindow", "Score", nullptr));
        score_label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        playerBox->setTitle(QCoreApplication::translate("MainWindow", "Player's Turn", nullptr));
        gameStatusDisplay->setText(QString());
        scoreboardBox->setTitle(QCoreApplication::translate("MainWindow", "Scoreboard", nullptr));
        boosterBox->setTitle(QCoreApplication::translate("MainWindow", "Boosters", nullptr));
        startTurnBtn->setText(QCoreApplication::translate("MainWindow", "Start Turn", nullptr));
        boosterBtn->setText(QCoreApplication::translate("MainWindow", "Use Booster", nullptr));
        timeUp->setText(QCoreApplication::translate("MainWindow", "TIME'S UP!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
