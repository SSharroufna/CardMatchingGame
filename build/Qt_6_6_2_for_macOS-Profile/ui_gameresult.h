/********************************************************************************
** Form generated from reading UI file 'gameresult.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMERESULT_H
#define UI_GAMERESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_gameResult
{
public:
    QTableWidget *scoreboardTable;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *gameResult)
    {
        if (gameResult->objectName().isEmpty())
            gameResult->setObjectName("gameResult");
        gameResult->resize(280, 377);
        scoreboardTable = new QTableWidget(gameResult);
        scoreboardTable->setObjectName("scoreboardTable");
        scoreboardTable->setGeometry(QRect(30, 140, 221, 191));
        QFont font;
        font.setPointSize(25);
        scoreboardTable->setFont(font);
        label = new QLabel(gameResult);
        label->setObjectName("label");
        label->setGeometry(QRect(57, 30, 171, 20));
        QFont font1;
        font1.setPointSize(25);
        font1.setBold(true);
        font1.setItalic(true);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(gameResult);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(77, 100, 131, 20));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignCenter);

        retranslateUi(gameResult);

        QMetaObject::connectSlotsByName(gameResult);
    } // setupUi

    void retranslateUi(QDialog *gameResult)
    {
        gameResult->setWindowTitle(QCoreApplication::translate("gameResult", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("gameResult", "GAME OVER!", nullptr));
        label_2->setText(QCoreApplication::translate("gameResult", "Final results:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gameResult: public Ui_gameResult {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMERESULT_H
