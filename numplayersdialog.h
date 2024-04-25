#ifndef NUMPLAYERSDIALOG_H
#define NUMPLAYERSDIALOG_H

#include <QDialog>
#include <QLabel>
#include <QTextEdit>
#include <QVBoxLayout>

namespace Ui {
class NumPlayersDialog;
}

class NumPlayersDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NumPlayersDialog(QWidget *parent = nullptr);
    ~NumPlayersDialog();
    int getNumPlayers();
    void setNumPlayers(int n);

private slots:
    void on_buttonBox_accepted();

private:
    Ui::NumPlayersDialog *ui;
    int numPlayers;

};

#endif // NUMPLAYERSDIALOG_H
