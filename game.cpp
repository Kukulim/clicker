#include "game.h"
#include "enemy.h"

#include <QDebug>
#include <QTimer>

Game::Game(QWidget * parent)
{
    //making scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,600);
    setScene(scene);
    setFixedSize(800,600);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    //create player
    player = new Player();

    //create enemy
    spawnEnemy();


    show();
}

void Game::spawnEnemy()
{
    enemy = new Enemy();
    scene->addItem(enemy);

    //make connection
    connect(enemy,SIGNAL(enemykilled()),this,SLOT(spawnEnemy()));

    wave++;
}
