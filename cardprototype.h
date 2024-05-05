#ifndef CARDPROTOTYPE_HPP
#define CARDPROTOTYPE_HPP

#include <QWidget>
#include <QPixmap>
#include <QObject>
#include <QGraphicsPixmapItem>
#include <QGraphicsSceneMouseEvent>

//Regular Cards
class Card :  public QObject, public QGraphicsPixmapItem{
     Q_OBJECT
public:
    Card(const QPixmap& frontImage, const QPixmap& backImage, QGraphicsItem* parent = nullptr)
        : QGraphicsPixmapItem(backImage, parent), frontImage_(frontImage), backImage_(backImage), flipped_(false) {

    }

    const QPixmap& image() const  {
        return flipped_ ? backImage_ : frontImage_;
    }

    bool isFlipped() const {
        return flipped_;
    }

    void toggle() {
        if (!flipped_) {
            setPixmap(frontImage_);
        } else {
            setPixmap(backImage_);
        }
        flipped_ = !flipped_;
    }

    int points() const { return 5; }

    const QPixmap& frontImage() const { return frontImage_; }
    const QPixmap& backImage() const { return backImage_; }

signals:
    void doubleClicked();

public slots:
    virtual void onDoubleClick() { qDebug() << "Double Clicked";};

private:
    QPixmap frontImage_;
    QPixmap backImage_;
    bool flipped_;
};

// Special booster card representing "Glancer"
class GlancerCard : public Card{
public:
    GlancerCard(const QPixmap& frontImage, const QPixmap& backImage, QGraphicsItem* parent = nullptr)
        : Card(frontImage, backImage, parent) {}

    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        qDebug() << " GlancerCard Double Clicked";
        doubleClicked();
    }

};

// Special booster card "Double Point"
class DoublePointCard : public Card  {
public:
    DoublePointCard(const QPixmap& frontImage, const QPixmap& backImage, QGraphicsItem* parent = nullptr)
        : Card(frontImage, backImage, parent) {
    }

    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        qDebug() << " DoublePointCard Double Clicked";
        doubleClicked();
    }

};

// Special booster card "Extra Time"
class ExtraTimeCard : public Card  {
public:
    ExtraTimeCard(const QPixmap& frontImage, const QPixmap& backImage, QGraphicsItem* parent = nullptr)
        : Card(frontImage, backImage, parent) {}

    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        qDebug() << " ExtraTimeCard Double Clicked";
        doubleClicked();
    }
};

// Card factory class for creating prototype objects
class CardPrototypeFactory {
public:
    enum CardType {
        computer,
        boy,
        openBox,
        closedBox,
        target,
        gem,
        board,
        piano,
        bag,
        speaker,
        game,
        clock,
        map,
        doublePoint,
        extraTime,
        glancer,
    };

    Card* createPrototype(CardType type);

};

#endif // CARDPROTOTYPE_HPP
