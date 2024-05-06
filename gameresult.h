#ifndef GAMERESULT_H
#define GAMERESULT_H

#include <QDialog>

namespace Ui {
class gameResult;
}

class gameResult : public QDialog
{
    Q_OBJECT

public:
    explicit gameResult(QWidget *parent = nullptr);
    ~gameResult();

private:
    Ui::gameResult *ui;
};

#endif // GAMERESULT_H
