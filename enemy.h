#ifndef ENEMY_H
#define ENEMY_H

#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QGraphicsTextItem>
#include <QGraphicsSceneMouseEvent>
#include <QObject>

class Enemy:public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Enemy(QGraphicsItem * parent=nullptr);

    int health=0;
    QGraphicsTextItem *healtBar;

    void mousePressEvent(QGraphicsSceneMouseEvent *event);
signals:
    void enemykilled();

};

#endif // ENEMY_H
