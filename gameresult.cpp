#include "gameresult.h"
#include "ui_gameresult.h"
#include "player.h"
#include <QVector>
#include <algorithm>

gameResult::gameResult(QWidget *parent, const QVector<Player>& players)
    : QDialog(parent)
    , ui(new Ui::gameResult)
{
    ui->setupUi(this);


    QVector<Player> sortedPlayers = players;
    std::sort(sortedPlayers.begin(), sortedPlayers.end(), [](const Player& a, const Player& b) {
        return a.getScore() > b.getScore();
    });


    ui->scoreboardTable->setStyleSheet("color : white;" "background-color: rgb(89, 46, 143);" "border-top-left-radius : 5px;"
                                       "border-top-right-radius : 5px;" "border-bottom-left-radius : 5px;" "border-bottom-right-radius : 5px;");
    ui->scoreboardTable->setRowCount(players.size());
    ui->scoreboardTable->setColumnCount(2);
    ui->scoreboardTable->setColumnWidth(0, 144);
    ui->scoreboardTable->horizontalHeader()->hide();

    for (int i = 0; i < sortedPlayers.size(); i++){
        ui->scoreboardTable->setItem(i, 0, new QTableWidgetItem(sortedPlayers[i].getName()));
        ui->scoreboardTable->setItem(i, 1, new QTableWidgetItem(QString::number(sortedPlayers[i].getScore())));
    }

    //Sorts the table and puts the person with the highest score at the top
    Qt::SortOrder order = Qt::DescendingOrder;
    ui->scoreboardTable->sortItems(1, order);
    ui->scoreboardTable->resizeColumnToContents(1);
}

gameResult::~gameResult()
{
    delete ui;
}
