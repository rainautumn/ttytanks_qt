#include "render.h"
#include <unistd.h>

Render::Render(QObject *parent) : QThread(parent)
{
    initscr();
    noecho();
    curs_set(FALSE);
    render_startpage();
    render_startlogo();
    refresh();
}

void Render::run()
{
}

void Render::render_tank(Tank *tank)
{
    
}

void Render::render_startpage()
{
    mvaddstr(12-6, 12 ,"TTYTANKS 2");
    mvaddstr(12-2, 8 ,"1 connect to server");
    mvaddstr(12-1, 8 ,"2 create server");
    mvaddstr(12-0, 8 ,"3 game with bots");
    mvaddstr(12+1, 8 ,"4 settings");
    mvaddstr(12+2, 8 ,"5 about this game");
    mvaddstr(12+3, 8 ,"0 exit");
}

void Render::render_startlogo()
{
    mvaddstr(12-8, 60 ,"  xx  ");
    mvaddstr(12-7, 60 ,"  xx  ");
    mvaddstr(12-1, 60 ,"  ##  ");
    mvaddstr(12  , 60 ,"  ##  ");
    mvaddstr(12+1, 60 ,"######");
    mvaddstr(12+2, 60 ,"######");
    mvaddstr(12+3, 60 ,"##  ##");
    mvaddstr(12+4, 60 ,"##  ##");
}

