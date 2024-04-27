#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "numplayersdialog.h"
#include "playernamesdialog.h"
#include "player.h"
#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <QRandomGenerator>
#include <QVector>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void handleCardClick();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;
    QVector<QGraphicsPixmapItem*> cards;

    //Initializing players
    QVector<Player> players;
    int currPlayerIndex;

};
#endif // MAINWINDOW_H
