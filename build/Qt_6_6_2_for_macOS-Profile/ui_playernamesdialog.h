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
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlayerNamesDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;

    void setupUi(QDialog *PlayerNamesDialog)
    {
        if (PlayerNamesDialog->objectName().isEmpty())
            PlayerNamesDialog->setObjectName("PlayerNamesDialog");
        PlayerNamesDialog->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PlayerNamesDialog->sizePolicy().hasHeightForWidth());
        PlayerNamesDialog->setSizePolicy(sizePolicy);
        buttonBox = new QDialogButtonBox(PlayerNamesDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(120, 260, 161, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        verticalLayoutWidget = new QWidget(PlayerNamesDialog);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(99, 60, 201, 181));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(PlayerNamesDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 10, 171, 20));

        retranslateUi(PlayerNamesDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, PlayerNamesDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, PlayerNamesDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(PlayerNamesDialog);
    } // setupUi

    void retranslateUi(QDialog *PlayerNamesDialog)
    {
        PlayerNamesDialog->setWindowTitle(QCoreApplication::translate("PlayerNamesDialog", "Player Names", nullptr));
        label->setText(QCoreApplication::translate("PlayerNamesDialog", "Enter a name for each player", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlayerNamesDialog: public Ui_PlayerNamesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYERNAMESDIALOG_H
