// filename    : main.cpp
// author      : allan a. sioson
// description : driver program of calculator app

# include "calc.h"
# include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc,argv);
    Calc *c = new Calc();
    c->show();
    return app.exec();
}
