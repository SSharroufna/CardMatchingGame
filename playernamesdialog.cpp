#include "playernamesdialog.h"
#include "ui_playernamesdialog.h"
#include <QDebug>
#include <QLabel>

PlayerNamesDialog::PlayerNamesDialog(QWidget *parent, int numOfPlayers)
    : QDialog(parent)
    , ui(new Ui::PlayerNamesDialog)
    , numOfPlayers(numOfPlayers)
{
    ui->setupUi(this);

    qDebug() << "Number of players:" << numOfPlayers;

    // Create QLabel and QTextEdit widgets dynamically based on numOfPlayers
    for (int i = 0; i < numOfPlayers; ++i) {
        QLabel *label = new QLabel("Player " + QString::number(i + 1) + ":", this);
        ui->verticalLayout_2->addWidget(label);

        QTextEdit *textEdit = new QTextEdit(this);
        ui->verticalLayout_2->addWidget(textEdit);
        inputs.append(textEdit);
    }

}

PlayerNamesDialog::~PlayerNamesDialog()
{
    delete ui;
    qDebug() << "Player names dialog closed";
}

QVector<QString> PlayerNamesDialog::getPlayers(){
    return playerNames;
}

void PlayerNamesDialog::on_buttonBox_accepted(){
    for (QTextEdit *te : inputs) {
        playerNames.append(te->toPlainText());
    }
}
