#include "cardprototype.h"
#include <QGraphicsSceneMouseEvent>

// Prototype factory class responsible for creating prototype objects
Card* CardPrototypeFactory::createPrototype(CardType type) {
    switch (type) {
    case computer:
        return new Card(QPixmap(":/images/card13.png"), QPixmap(":/images/back.png"));
    case boy:
        return new Card(QPixmap(":/images/card1.png"), QPixmap(":/images/back.png"));
    case openBox:
        return new Card(QPixmap("/images/card3.png"), QPixmap(":/images/back.png"));
    case target:
        return new Card(QPixmap(":/images/card4.png"), QPixmap(":/images/back.png"));
    case map:
        return new Card(QPixmap(":/images/card5.png"), QPixmap(":/images/back.png"));
    case game:
        return new Card(QPixmap(":/images/card6.png"), QPixmap(":/images/back.png"));
    case clock:
        return new Card(QPixmap(":/images/card7.png"), QPixmap(":/images/back.png"));
    case speaker:
        return new Card(QPixmap(":/images/card2.png"), QPixmap(":/images/back.png"));
    case bag:
        return new Card(QPixmap(":/images/card12.png"), QPixmap(":/images/back.png"));
    case board:
        return new Card(QPixmap(":/images/card11.png"), QPixmap(":/images/back.png"));
    case piano:
        return new Card(QPixmap(":/images/card10.png"), QPixmap(":/images/back.png"));
    case closedBox:
        return new Card(QPixmap(":/images/card9.png"), QPixmap(":/images/back.png"));
    case gem:
        return new Card(QPixmap(":/images/card8.png"), QPixmap(":/images/back.png"));
    case extraTime:
        return new ExtraTimeCard(QPixmap(":/images/time.png"), QPixmap(":/images/time.png"));
    case doublePoint:
        return new DoublePointCard(QPixmap(":/images/double.png"), QPixmap(":/images/double.png"));
    case glancer:
        return new GlancerCard(QPixmap(":/images/glancer.png"), QPixmap(":/images/glancer.png"));
    default:
        return nullptr;
    }
}



