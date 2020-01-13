#ifndef GAME_H
#define GAME_H


#include <QGraphicsScene>
#include <QGraphicsView>
#include <QMouseEvent>

#include "enemy.h"
#include "player.h"


class Game: public QGraphicsView
{
public:
    Game(QWidget * parent=nullptr);

    QGraphicsScene *scene;

    Player *player;

    int world=1;
    int wave=1;

    void attackEnemy();
    void spawnEnemy();


};

#endif // GAME_H
