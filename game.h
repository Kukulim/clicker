#ifndef GAME_H
#define GAME_H


#include <QGraphicsScene>
#include <QGraphicsView>
#include <QMouseEvent>

#include "enemy.h"
#include "player.h"
#include "boss.h"


class Game: public QGraphicsView
{
    Q_OBJECT
public:
    Game(QWidget * parent=nullptr);

    QGraphicsScene *scene;

    Player *player;
    Enemy *enemy;
    Boss *boss;

    int world=1;
    int wave=1;

    void attackEnemy();
public slots:
    void spawnEnemy();
    void spawnBoss();

};

#endif // GAME_H
