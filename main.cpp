#include <QCoreApplication>
#include <QDebug>
#include "render.h"

#define WIDTH 30
#define HEIGHT 10

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Render *render = new Render();
    QThread *render_thread= new QThread;

    render->moveToThread(render_thread);

    QObject::connect(render_thread, &QThread::started, render, &Render::run);

    render_thread->start();

    int c;
    while(1) {
        c=getchar();
        qDebug () << c;
    }

    return a.exec();
}

