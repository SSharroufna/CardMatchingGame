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

    ui->beginnerButton->setStyleSheet("background-color : green;"
                                      "border-top-left-radius : 5px;" "border-top-right-radius : 5px;"
                                      "border-bottom-left-radius : 5px;" "border-bottom-right-radius : 5px;");
    ui->intermediateButton->setStyleSheet("background-color : orange;"
                                        "border-top-left-radius : 5px;" "border-top-right-radius : 5px;"
                                        "border-bottom-left-radius : 5px;" "border-bottom-right-radius : 5px;");
    ui->expertButton->setStyleSheet("background-color : red;"
                                    "border-top-left-radius : 5px;" "border-top-right-radius : 5px;"
                                    "border-bottom-left-radius : 5px;" "border-bottom-right-radius : 5px;");
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
    ui->beginnerButton->setStyleSheet("background-color : green;"
                                      "border-top-left-radius : 5px;" "border-top-right-radius : 5px;"
                                      "border-bottom-left-radius : 5px;" "border-bottom-right-radius : 5px;");
    ui->intermediateButton->setStyleSheet("background-color : grey;"
                                          "border-top-left-radius : 5px;" "border-top-right-radius : 5px;"
                                          "border-bottom-left-radius : 5px;" "border-bottom-right-radius : 5px;");
    ui->expertButton->setStyleSheet("background-color : grey;"
                                    "border-top-left-radius : 5px;" "border-top-right-radius : 5px;"
                                    "border-bottom-left-radius : 5px;" "border-bottom-right-radius : 5px;");
}


void DifficultyDialog::on_intermediateButton_clicked()
{
    qDebug() << "Difficulty selected: Intermediate";
    setDifficulty(2);
    ui->beginnerButton->setStyleSheet("background-color : grey;"
                                      "border-top-left-radius : 5px;" "border-top-right-radius : 5px;"
                                      "border-bottom-left-radius : 5px;" "border-bottom-right-radius : 5px;");
    ui->intermediateButton->setStyleSheet("background-color : orange;"
                                          "border-top-left-radius : 5px;" "border-top-right-radius : 5px;"
                                          "border-bottom-left-radius : 5px;" "border-bottom-right-radius : 5px;");
    ui->expertButton->setStyleSheet("background-color : grey;"
                                    "border-top-left-radius : 5px;" "border-top-right-radius : 5px;"
                                    "border-bottom-left-radius : 5px;" "border-bottom-right-radius : 5px;");
}


void DifficultyDialog::on_expertButton_clicked()
{
    qDebug() << "Difficulty selected: Expert";
    setDifficulty(3);
    ui->beginnerButton->setStyleSheet("background-color : grey;"
                                      "border-top-left-radius : 5px;" "border-top-right-radius : 5px;"
                                      "border-bottom-left-radius : 5px;" "border-bottom-right-radius : 5px;");
    ui->intermediateButton->setStyleSheet("background-color : grey;"
                                          "border-top-left-radius : 5px;" "border-top-right-radius : 5px;"
                                          "border-bottom-left-radius : 5px;" "border-bottom-right-radius : 5px;");
    ui->expertButton->setStyleSheet("background-color : red;"
                                    "border-top-left-radius : 5px;" "border-top-right-radius : 5px;"
                                    "border-bottom-left-radius : 5px;" "border-bottom-right-radius : 5px;");
}


void DifficultyDialog::on_buttonBox_accepted()
{
    switch(difficulty){
    case 1:
        qDebug() << "Difficulty confirmed: Beginner";
        break;
    case 2:
        qDebug() << "Difficulty confirmed: Intermediate";
        break;
    case 3:
        qDebug() << "Difficulty confirmed: Expert";
        break;
    }
}

