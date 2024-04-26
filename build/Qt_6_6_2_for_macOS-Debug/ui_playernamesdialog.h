/********************************************************************************
** Form generated from reading UI file 'playernamesdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYERNAMESDIALOG_H
#define UI_PLAYERNAMESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlayerNamesDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;

    void setupUi(QDialog *PlayerNamesDialog)
    {
        if (PlayerNamesDialog->objectName().isEmpty())
            PlayerNamesDialog->setObjectName("PlayerNamesDialog");
        PlayerNamesDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(PlayerNamesDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(120, 240, 161, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        verticalLayoutWidget = new QWidget(PlayerNamesDialog);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(99, 80, 201, 111));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);

        retranslateUi(PlayerNamesDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, PlayerNamesDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, PlayerNamesDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(PlayerNamesDialog);
    } // setupUi

    void retranslateUi(QDialog *PlayerNamesDialog)
    {
        PlayerNamesDialog->setWindowTitle(QCoreApplication::translate("PlayerNamesDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlayerNamesDialog: public Ui_PlayerNamesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYERNAMESDIALOG_H
