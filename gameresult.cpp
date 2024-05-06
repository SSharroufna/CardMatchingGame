#include "gameresult.h"
#include "ui_gameresult.h"

gameResult::gameResult(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::gameResult)
{
    ui->setupUi(this);
}

gameResult::~gameResult()
{
    delete ui;
}
