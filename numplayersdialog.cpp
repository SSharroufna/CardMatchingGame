#include "numplayersdialog.h"
#include "ui_numplayersdialog.h"
#include <QDebug>

NumPlayersDialog::NumPlayersDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::NumPlayersDialog)
{
    ui->setupUi(this);
    ui->spinBox->setMinimum(2);
    ui->spinBox->setMaximum(4);
    qDebug() << "NumPlayersDialog created.";
}

NumPlayersDialog::~NumPlayersDialog()
{
    delete ui;
    qDebug() << "NumPlayersDialog closed.";
}

int NumPlayersDialog::getNumPlayers(){
    return numPlayers;

}

void NumPlayersDialog::setNumPlayers(int n){
    numPlayers = n;
}

void NumPlayersDialog::on_buttonBox_accepted(){
    setNumPlayers(ui->spinBox->value());
}
