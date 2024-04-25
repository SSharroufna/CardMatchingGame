#ifndef PLAYERNAMESDIALOG_H
#define PLAYERNAMESDIALOG_H

#include <QDialog>

namespace Ui {
class PlayerNamesDialog;
}

class PlayerNamesDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PlayerNamesDialog(QWidget *parent = nullptr);
    ~PlayerNamesDialog();

private:
    Ui::PlayerNamesDialog *ui;
};

#endif // PLAYERNAMESDIALOG_H
