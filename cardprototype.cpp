#include "cardprototype.h"
#include <QGraphicsSceneMouseEvent>

// Prototype factory class responsible for creating prototype objects
Card* CardPrototypeFactory::createPrototype(CardType type) {
    switch (type) {
    case computer:
        return new Card(QPixmap("/Users/sarah/Downloads/images/card13.png"), QPixmap("/Users/sarah/Downloads/images/back.png"));
    case boy:
        return new Card(QPixmap("/Users/sarah/Downloads/images/card1.png"), QPixmap("/Users/sarah/Downloads/images/back.png"));
    case openBox:
        return new Card(QPixmap("/Users/sarah/Downloads/images/card3.png"), QPixmap("/Users/sarah/Downloads/images/back.png"));
    case target:
        return new Card(QPixmap("/Users/sarah/Downloads/images/card4.png"), QPixmap("/Users/sarah/Downloads/images/back.png"));
    case map:
        return new Card(QPixmap("/Users/sarah/Downloads/images/card5.png"), QPixmap("/Users/sarah/Downloads/images/back.png"));
    case game:
        return new Card(QPixmap("/Users/sarah/Downloads/images/card6.png"), QPixmap("/Users/sarah/Downloads/images/back.png"));
    case clock:
        return new Card(QPixmap("/Users/sarah/Downloads/images/card7.png"), QPixmap("/Users/sarah/Downloads/images/back.png"));
    case speaker:
        return new Card(QPixmap("/Users/sarah/Downloads/images/card2.png"), QPixmap("/Users/sarah/Downloads/images/back.png"));
    case bag:
        return new Card(QPixmap("/Users/sarah/Downloads/images/card12.png"), QPixmap("/Users/sarah/Downloads/images/back.png"));
    case board:
        return new Card(QPixmap("/Users/sarah/Downloads/images/card11.png"), QPixmap("/Users/sarah/Downloads/images/back.png"));
    case piano:
        return new Card(QPixmap("/Users/sarah/Downloads/images/card10.png"), QPixmap("/Users/sarah/Downloads/images/back.png"));
    case closedBox:
        return new Card(QPixmap("/Users/sarah/Downloads/images/card9.png"), QPixmap("/Users/sarah/Downloads/images/back.png"));
    case gem:
        return new Card(QPixmap("/Users/sarah/Downloads/images/card8.png"), QPixmap("/Users/sarah/Downloads/images/back.png"));
    case extraTime:
        return new Card(QPixmap("/Users/sarah/Downloads/images/card1.png"), QPixmap("/Users/sarah/Downloads/images/back.png"));
    case doublePoint:
        return new Card(QPixmap("/Users/sarah/Downloads/images/double.png"), QPixmap("/Users/sarah/Downloads/images/double.png"));
    case glancer:
        return new Card(QPixmap("/Users/sarah/Downloads/images/glancer.png"), QPixmap("/Users/sarah/Downloads/images/glancer.png"));
    default:
        return nullptr;
    }
}
