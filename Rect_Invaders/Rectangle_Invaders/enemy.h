#ifndef ENEMY_H
#define ENEMY_H
#include <QObject>
#include <QGraphicsPixmapItem>

class Enemy: public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Enemy(QGraphicsItem *parent=0);

public slots:
    void move();

private:
    int xPos, yPos, enemySpeed;
};

#endif // ENEMY_H
