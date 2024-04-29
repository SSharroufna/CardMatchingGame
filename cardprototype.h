#ifndef CARDPROTOTYPE_HPP
#define CARDPROTOTYPE_HPP

#include <QWidget>
#include <QPixmap>

// Abstract base class representing the prototype interface
class CardPrototype : public QWidget {
public:
    CardPrototype(QWidget *parent = nullptr) : QWidget(parent) {}
    virtual ~CardPrototype() {}
    virtual CardPrototype* clone() const = 0;
    virtual const QPixmap& image() const = 0;
    // Add other methods as needed
};

// Concrete prototype class representing a specific type of card
class Card : public CardPrototype {
public:
    Card(const QPixmap& image) : image_(image) {}

    virtual ~Card() {}

    CardPrototype* clone() const override {
        return new Card(image_);
    }

    const QPixmap& image() const override {
        return image_;
    }

private:
    QPixmap image_;
};

// Prototype factory class responsible for managing prototype objects
class CardPrototypeFactory {
public:
    enum CardType {
        // Define different types of cards
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
