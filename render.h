#ifndef RENDER_H
#define RENDER_H

#include <QThread>
#include <ncurses.h>
#include "gameplay.h"

class Render : public QThread
{
    Q_OBJECT
public:
    explicit Render(QObject *parent = 0);
signals:

public slots:
    void run();
    void render_tank(Tank *tank);
private:
    void render_startpage();
    void render_startlogo();
};

#endif // RENDER_H
