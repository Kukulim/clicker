#include "boss.h"

Boss::Boss(QGraphicsItem *parent)
{
    setPos(430,150);
    setPixmap(QPixmap(":/images/boss.png"));
    health=15;

    Enemy::healtBar->setPlainText("");

    healtBar = new QGraphicsTextItem(this);

    healtBar->setPlainText("HP:" + QString::number(health));
    healtBar->setDefaultTextColor(Qt::black);
    healtBar->setFont(QFont("times",25));
    healtBar->setPos(90,-50);
}
