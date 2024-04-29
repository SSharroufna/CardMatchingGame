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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *scene;
    QPushButton *startGameBtn;
    QPushButton *newGameBtn;
    QLabel *timerLabe;
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
    QTableWidget *tableWidget;
    QGroupBox *scoreBox_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
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
        scene->setGeometry(QRect(260, 40, 821, 701));
        startGameBtn = new QPushButton(centralwidget);
        startGameBtn->setObjectName("startGameBtn");
        startGameBtn->setGeometry(QRect(20, 600, 100, 32));
        newGameBtn = new QPushButton(centralwidget);
        newGameBtn->setObjectName("newGameBtn");
        newGameBtn->setGeometry(QRect(130, 600, 100, 32));
        timerLabe = new QLabel(centralwidget);
        timerLabe->setObjectName("timerLabe");
        timerLabe->setGeometry(QRect(1100, 190, 101, 51));
        QFont font;
        font.setPointSize(35);
        font.setBold(true);
        font.setItalic(true);
        timerLabe->setFont(font);
        quitGameBtn = new QPushButton(centralwidget);
        quitGameBtn->setObjectName("quitGameBtn");
        quitGameBtn->setGeometry(QRect(20, 630, 211, 32));
        timerDisplay = new QLCDNumber(centralwidget);
        timerDisplay->setObjectName("timerDisplay");
        timerDisplay->setGeometry(QRect(1210, 190, 101, 51));
        difficultyBox = new QGroupBox(centralwidget);
        difficultyBox->setObjectName("difficultyBox");
        difficultyBox->setGeometry(QRect(20, 130, 211, 80));
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
        difficultyLabel->setGeometry(QRect(0, 30, 211, 51));
        QFont font2;
        font2.setPointSize(24);
        font2.setBold(false);
        font2.setItalic(false);
        difficultyLabel->setFont(font2);
        difficultyLabel->setAlignment(Qt::AlignCenter);
        movesBox = new QGroupBox(centralwidget);
        movesBox->setObjectName("movesBox");
        movesBox->setGeometry(QRect(1110, 270, 191, 80));
        movesBox->setFont(font1);
        movesBox->setAlignment(Qt::AlignCenter);
        moves_label = new QLabel(movesBox);
        moves_label->setObjectName("moves_label");
        moves_label->setGeometry(QRect(0, 40, 191, 41));
        QFont font3;
        font3.setPointSize(24);
        font3.setBold(true);
        font3.setItalic(true);
        moves_label->setFont(font3);
        moves_label->setAlignment(Qt::AlignCenter);
        scoreBox = new QGroupBox(centralwidget);
        scoreBox->setObjectName("scoreBox");
        scoreBox->setGeometry(QRect(1110, 360, 191, 80));
        scoreBox->setFont(font1);
        scoreBox->setAlignment(Qt::AlignCenter);
        score_label = new QLabel(scoreBox);
        score_label->setObjectName("score_label");
        score_label->setGeometry(QRect(0, 40, 191, 41));
        score_label->setFont(font3);
        score_label->setAlignment(Qt::AlignCenter);
        playerBox = new QGroupBox(centralwidget);
        playerBox->setObjectName("playerBox");
        playerBox->setGeometry(QRect(1110, 80, 191, 80));
        playerBox->setFont(font1);
        playerBox->setAlignment(Qt::AlignCenter);
        gameStatusDisplay = new QLabel(playerBox);
        gameStatusDisplay->setObjectName("gameStatusDisplay");
        gameStatusDisplay->setGeometry(QRect(0, 40, 191, 41));
        QFont font4;
        font4.setPointSize(20);
        font4.setBold(true);
        font4.setItalic(true);
        gameStatusDisplay->setFont(font4);
        gameStatusDisplay->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        scoreboardBox = new QGroupBox(centralwidget);
        scoreboardBox->setObjectName("scoreboardBox");
        scoreboardBox->setGeometry(QRect(20, 240, 211, 341));
        scoreboardBox->setFont(font1);
        scoreboardBox->setAutoFillBackground(true);
        scoreboardBox->setAlignment(Qt::AlignCenter);
        scoreboardBox->setFlat(false);
        tableWidget = new QTableWidget(scoreboardBox);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(0, 30, 211, 231));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        QFont font5;
        font5.setPointSize(12);
        font5.setBold(true);
        font5.setItalic(true);
        tableWidget->setFont(font5);
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableWidget->setSortingEnabled(true);
        tableWidget->setWordWrap(false);
        tableWidget->setCornerButtonEnabled(false);
        tableWidget->verticalHeader()->setVisible(false);
        scoreBox_2 = new QGroupBox(centralwidget);
        scoreBox_2->setObjectName("scoreBox_2");
        scoreBox_2->setGeometry(QRect(1110, 470, 191, 80));
        scoreBox_2->setFont(font1);
        scoreBox_2->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(1110, 670, 191, 32));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(1149, 570, 111, 32));
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
        timerLabe->setText(QCoreApplication::translate("MainWindow", "Timer", nullptr));
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
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Player", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Score", nullptr));
        scoreBox_2->setTitle(QCoreApplication::translate("MainWindow", "Boosters", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Start Turn", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Use Booster", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
