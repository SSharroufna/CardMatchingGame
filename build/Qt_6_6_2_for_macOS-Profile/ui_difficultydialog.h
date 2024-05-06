/********************************************************************************
** Form generated from reading UI file 'difficultydialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIFFICULTYDIALOG_H
#define UI_DIFFICULTYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DifficultyDialog
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *intermediateButton;
    QPushButton *beginnerButton;
    QPushButton *expertButton;
    QLabel *label;

    void setupUi(QDialog *DifficultyDialog)
    {
        if (DifficultyDialog->objectName().isEmpty())
            DifficultyDialog->setObjectName("DifficultyDialog");
        DifficultyDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(DifficultyDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(120, 240, 161, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        intermediateButton = new QPushButton(DifficultyDialog);
        intermediateButton->setObjectName("intermediateButton");
        intermediateButton->setGeometry(QRect(100, 130, 201, 31));
        QFont font;
        font.setBold(true);
        intermediateButton->setFont(font);
        beginnerButton = new QPushButton(DifficultyDialog);
        beginnerButton->setObjectName("beginnerButton");
        beginnerButton->setGeometry(QRect(100, 90, 201, 31));
        beginnerButton->setFont(font);
        expertButton = new QPushButton(DifficultyDialog);
        expertButton->setObjectName("expertButton");
        expertButton->setGeometry(QRect(100, 170, 201, 31));
        expertButton->setFont(font);
        label = new QLabel(DifficultyDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 50, 141, 16));
        QFont font1;
        font1.setPointSize(16);
        label->setFont(font1);

        retranslateUi(DifficultyDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DifficultyDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DifficultyDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DifficultyDialog);
    } // setupUi

    void retranslateUi(QDialog *DifficultyDialog)
    {
        DifficultyDialog->setWindowTitle(QCoreApplication::translate("DifficultyDialog", "Dialog", nullptr));
        intermediateButton->setText(QCoreApplication::translate("DifficultyDialog", "Intermediate", nullptr));
        beginnerButton->setText(QCoreApplication::translate("DifficultyDialog", "Beginner", nullptr));
        expertButton->setText(QCoreApplication::translate("DifficultyDialog", "Expert", nullptr));
        label->setText(QCoreApplication::translate("DifficultyDialog", "Select difficulty level", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DifficultyDialog: public Ui_DifficultyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIFFICULTYDIALOG_H
