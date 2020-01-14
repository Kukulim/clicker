#ifndef BOSS_H
#define BOSS_H

#include <QObject>
#include <QGraphicsTextItem>

#include "enemy.h"

class Boss: public Enemy
{
    Q_OBJECT
public:
    Boss(QGraphicsItem * parent=nullptr);

};

#endif // BOSS_H
