/********************************************************************************
** Form generated from reading UI file 'numplayersdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUMPLAYERSDIALOG_H
#define UI_NUMPLAYERSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_NumPlayersDialog
{
public:
    QDialogButtonBox *buttonBox;
    QSpinBox *spinBox;
    QLabel *label;

    void setupUi(QDialog *NumPlayersDialog)
    {
        if (NumPlayersDialog->objectName().isEmpty())
            NumPlayersDialog->setObjectName("NumPlayersDialog");
        NumPlayersDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(NumPlayersDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(130, 230, 141, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        spinBox = new QSpinBox(NumPlayersDialog);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(170, 140, 41, 21));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(18);
        spinBox->setFont(font);
        spinBox->setAlignment(Qt::AlignCenter);
        label = new QLabel(NumPlayersDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 70, 181, 20));

        retranslateUi(NumPlayersDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, NumPlayersDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, NumPlayersDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(NumPlayersDialog);
    } // setupUi

    void retranslateUi(QDialog *NumPlayersDialog)
    {
        NumPlayersDialog->setWindowTitle(QCoreApplication::translate("NumPlayersDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("NumPlayersDialog", "Enter number of players (2-4):", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NumPlayersDialog: public Ui_NumPlayersDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMPLAYERSDIALOG_H
