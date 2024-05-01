#ifndef DIFFICULTYDIALOG_H
#define DIFFICULTYDIALOG_H

#include <QDialog>
#include <QPalette>
#include <QString>

namespace Ui {
class DifficultyDialog;
}

class DifficultyDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DifficultyDialog(QWidget *parent = nullptr);
    ~DifficultyDialog();
    int getDifficulty();
    void setDifficulty(int n);

private slots:
    void on_beginnerButton_clicked();
    void on_intermediateButton_clicked();
    void on_expertButton_clicked();
    void on_buttonBox_accepted();

private:
    Ui::DifficultyDialog *ui;
    int difficulty;
};

#endif // DIFFICULTYDIALOG_H
