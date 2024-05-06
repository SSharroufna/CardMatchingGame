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

QT_BEGIN_NAMESPACE

class Ui_gameResult
{
public:

    void setupUi(QDialog *gameResult)
    {
        if (gameResult->objectName().isEmpty())
            gameResult->setObjectName("gameResult");
        gameResult->resize(400, 300);

        retranslateUi(gameResult);

        QMetaObject::connectSlotsByName(gameResult);
    } // setupUi

    void retranslateUi(QDialog *gameResult)
    {
        gameResult->setWindowTitle(QCoreApplication::translate("gameResult", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gameResult: public Ui_gameResult {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMERESULT_H
