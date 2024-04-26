#ifndef PLAYERNAMESDIALOG_H
#define PLAYERNAMESDIALOG_H

#include <QDialog>
#include <QTextEdit>
#include <QVector>

namespace Ui {
class PlayerNamesDialog;
}

class PlayerNamesDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PlayerNamesDialog(QWidget *parent = nullptr, int numOfPlayers = 0);
    ~PlayerNamesDialog();
    QVector<QString> getPlayers();

private slots:
    void on_buttonBox_accepted();


private:
    Ui::PlayerNamesDialog *ui;
    int numOfPlayers;
    QVector<QString> playerNames;
    QVector<QTextEdit*> inputs;
};

#endif // PLAYERNAMESDIALOG_H
