#ifndef GAMERESULT_H
#define GAMERESULT_H
#include "player.h"

#include <QDialog>

namespace Ui {
class gameResult;
}

class gameResult : public QDialog
{
    Q_OBJECT

public:
    explicit gameResult(QWidget *parent = nullptr, const QVector<Player>& players = QVector<Player>());
    ~gameResult();

private:
    Ui::gameResult *ui;
    QVector<Player> playersFinal;
};

#endif // GAMERESULT_H
