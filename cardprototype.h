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

// Regular Cards
class Card : public QGraphicsPixmapItem {
public:
    Card(const QPixmap& frontImage, const QPixmap& backImage, QGraphicsItem* parent = nullptr)
        : QGraphicsPixmapItem(backImage, parent), frontImage_(frontImage), backImage_(backImage), flipped_(false) {}

    // void mousePressEvent(QGraphicsSceneMouseEvent* event) override {
    //     toggle();
    // }

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

    virtual int points() const {
        return 5;
    }

    const QPixmap& frontImage() const { return frontImage_; }
    const QPixmap& backImage() const { return backImage_; }

private:
    QPixmap frontImage_;
    QPixmap backImage_;
    bool flipped_;

protected:
    int points_;
};

// Special booster card representing "Glancer"
class GlancerCard : public Card {
public:
    GlancerCard(const QPixmap& frontImage, const QPixmap& backImage, QGraphicsItem* parent = nullptr)
        : Card(frontImage, backImage, parent) {}

    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        qDebug() << "GlancerCard Activated";
    }
};

// Special booster card "Double Point"
class DoublePointCard : public Card {
public:
    DoublePointCard(const QPixmap& frontImage, const QPixmap& backImage, QGraphicsItem* parent = nullptr)
        : Card(frontImage, backImage, parent) {}

    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event)  {

        qDebug() << "DoublePointCard Activated";

        points();
    }

    int points() const override {
        return Card::points() * 2;
    }
};

// Special booster card "Extra Time"
class ExtraTimeCard : public Card {
public:
    ExtraTimeCard(const QPixmap& frontImage, const QPixmap& backImage, QGraphicsItem* parent = nullptr)
        : Card(frontImage, backImage, parent) {}

    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event)  {
      qDebug() << "ExtraTimeCard";
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

    static Card* createPrototype(CardType type);
};

#endif // CARDPROTOTYPE_HPP
