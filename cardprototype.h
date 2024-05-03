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

    void setPoints(int points) { points_ = points; }
    int points() const { return points_; }

    virtual void activateEffect()  {
        qDebug() << "Regular card has no effect";
    }

    const QPixmap& frontImage() const { return frontImage_; }
    const QPixmap& backImage() const { return backImage_; }

private:
    QPixmap frontImage_;
    QPixmap backImage_;
    bool flipped_;

protected:
    int points_ = 5;
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

    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override  {
        qDebug() << "DoublePointCard double clicked";
        activateEffect();
    }

    void activateEffect()  override {
        qDebug() << "DoublePointCard effect activated";
        // // Double the points of the base card
        // int currentPoints = points();
        // int doubledPoints = currentPoints * 2;
        // qDebug() << "Current points:" << currentPoints << ", Doubled points:" << doubledPoints;
        // setPoints(doubledPoints);
        // qDebug() << points();
    }
};

// Special booster card "Extra Time"
class ExtraTimeCard : public Card {
public:
    ExtraTimeCard(const QPixmap& frontImage, const QPixmap& backImage, QGraphicsItem* parent = nullptr)
        : Card(frontImage, backImage, parent) {}

signals:
    void doubleClicked();

protected:
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent* event) override {
        qDebug() << "ExtraTimeCard double clicked";
        // Emit the signal indicating the extra time card has been double-clicked
        emit doubleClicked();
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
