#include "playernamesdialog.h"
#include "ui_playernamesdialog.h"

PlayerNamesDialog::PlayerNamesDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PlayerNamesDialog)
{
    ui->setupUi(this);
}

PlayerNamesDialog::~PlayerNamesDialog()
{
    delete ui;
}
