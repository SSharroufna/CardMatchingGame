#include "difficultydialog.h"
#include "ui_difficultydialog.h"
#include <QColor>
#include <QColorDialog>
#include <QDebug>
#include <QString>

DifficultyDialog::DifficultyDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DifficultyDialog)
{
    ui->setupUi(this);

    this->setWindowTitle("Difficulty Selection");

    ui->beginnerButton->setStyleSheet("background-color : green");
    ui->intermediateButton->setStyleSheet("background-color : orange");
    ui->expertButton->setStyleSheet("background-color : red");
}

DifficultyDialog::~DifficultyDialog()
{
    delete ui;
}

int DifficultyDialog::getDifficulty(){
    return difficulty;
}

void DifficultyDialog::setDifficulty(int n){
    difficulty = n;
}

void DifficultyDialog::on_beginnerButton_clicked()
{
    setDifficulty(1);
    qDebug() << "Difficulty selected: Beginner";
    ui->beginnerButton->setStyleSheet("background-color : green");
    ui->intermediateButton->setStyleSheet("background-color : grey");
    ui->expertButton->setStyleSheet("background-color : grey");
}


void DifficultyDialog::on_intermediateButton_clicked()
{
    qDebug() << "Difficulty selected: Intermediate";
    setDifficulty(2);
    ui->beginnerButton->setStyleSheet("background-color : grey");
    ui->intermediateButton->setStyleSheet("background-color : orange");
    ui->expertButton->setStyleSheet("background-color : grey");
}


void DifficultyDialog::on_expertButton_clicked()
{
    qDebug() << "Difficulty selected: Expert";
    setDifficulty(3);
    ui->beginnerButton->setStyleSheet("background-color : grey");
    ui->intermediateButton->setStyleSheet("background-color : grey");
    ui->expertButton->setStyleSheet("background-color : red");
}


void DifficultyDialog::on_buttonBox_accepted()
{
    qDebug() << "Difficulty confirmed:" << getDifficulty();
}

