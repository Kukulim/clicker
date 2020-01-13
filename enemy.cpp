#include "enemy.h"
#include <QFont>

#include <QDebug>

Enemy::Enemy()
{
    setPos(430,150);
    setPixmap(QPixmap(":/images/unicorn.png"));
    health=10;

    QGraphicsTextItem *healtBar = new QGraphicsTextItem(this);

    healtBar->setPlainText("HP:" + QString::number(health));
    healtBar->setDefaultTextColor(Qt::red);
    healtBar->setFont(QFont("times",16));
    healtBar->setPos(75,-50);
}

void Enemy::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    health--;
    healtBar->setPlainText("HP:" + QString::number(health));
    qDebug()<<health;
}
