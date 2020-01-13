#ifndef ENEMY_H
#define ENEMY_H

#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QGraphicsTextItem>
#include <QGraphicsSceneMouseEvent>

class Enemy: public QGraphicsPixmapItem
{
public:
    Enemy();

    int health=0;
    QGraphicsTextItem *healtBar;

    void mousePressEvent(QGraphicsSceneMouseEvent *event);

};

#endif // ENEMY_H
