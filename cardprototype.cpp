#include "cardprototype.h"

// Prototype factory class responsible for managing prototype objects
CardPrototype* CardPrototypeFactory::createPrototype(CardType type) {
    switch (type) {
    case computer:
        return new Card(QPixmap("/Users/sarah/Downloads/images/card13.png"));
    case boy:
        return new Card(QPixmap("/Users/sarah/Downloads/images/card1.png"));
    case openBox:
        return new Card(QPixmap("/Users/sarah/Downloads/images/card3.png"));
    case target:
        return new Card(QPixmap("/Users/sarah/Downloads/images/card4.png"));
    case map:
        return new Card(QPixmap("/Users/sarah/Downloads/images/card5.png"));
    case game:
        return new Card(QPixmap("/Users/sarah/Downloads/images/card6.png"));
    case clock:
        return new Card(QPixmap("/Users/sarah/Downloads/images/card7.png"));
    case speaker:
        return new Card(QPixmap("/Users/sarah/Downloads/images/card2.png"));
    case bag:
        return new Card(QPixmap("/Users/sarah/Downloads/images/card12.png"));
    case board:
        return new Card(QPixmap("/Users/sarah/Downloads/images/card11.png"));
    case piano:
        return new Card(QPixmap("/Users/sarah/Downloads/images/card10.png"));
    case closedBox:
        return new Card(QPixmap("/Users/sarah/Downloads/images/card9.png"));
    case gem:
        return new Card(QPixmap("/Users/sarah/Downloads/images/card8.png"));
    default:
        return nullptr;
    }
}
