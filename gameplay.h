#ifndef GAMEPLAY_H
#define GAMEPLAY_H

#include <QObject>

struct Tank
{
    u_int8_t x,y; // coord
    u_int8_t rot; // orietnt
};

class gameplay
{
public:
    gameplay();
signals:
//    render_tank(Tank *tank);
private:
    Tank *tank;
};

#endif // GAMEPLAY_H
