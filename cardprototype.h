#ifndef CARDPROTOTYPE_HPP
#define CARDPROTOTYPE_HPP

#include <QWidget>
#include <QPixmap>
#include <QGraphicsPixmapItem>
#include <QGraphicsSceneMouseEvent>

class CardPrototype : public QWidget {
public:
    CardPrototype(QWidget *parent = nullptr) : QWidget(parent) {}
    virtual ~CardPrototype() {}

    virtual CardPrototype* clone() const = 0;
    virtual const QPixmap& image() const = 0;
};

// prototype class representing a specific type of card
class Card : public QGraphicsPixmapItem, public CardPrototype {
public:
    Card(const QPixmap& frontImage, const QPixmap& backImage, QGraphicsItem* parent = nullptr)
        : QGraphicsPixmapItem(backImage, parent), frontImage_(frontImage), backImage_(backImage), flipped_(false) {}

    void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
        qDebug() << "Mouse pressed on card!";
        toggle();
    }

    CardPrototype* clone() const override {
        return new Card(frontImage_, backImage_);
    }

    const QPixmap& image() const override {
        return flipped_ ? backImage_ : frontImage_;
    }

    void toggle() {
        qDebug() << "Toggling card!";
        if (!flipped_) {
            setPixmap(frontImage_);
        } else {
            setPixmap(backImage_);
        }
        flipped_ = !flipped_;

        // Ensure that mouse events are consumed after toggling
       //setAcceptHoverEvents(flipped_);
       //setAcceptedMouseButtons(flipped_ ? Qt::NoButton : Qt::LeftButton);
    }

    const QPixmap& frontImage() const { return frontImage_; }
    const QPixmap& backImage() const { return backImage_; }
private:
    QPixmap frontImage_;
    QPixmap backImage_;
    bool flipped_;
};

// class for other cards Joker, Looker

// Prototype factory class for creating prototype objects
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
        map
    };

    static CardPrototype* createPrototype(CardType type);
};

#endif // CARDPROTOTYPE_HPP
