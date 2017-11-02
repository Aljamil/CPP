// filename    : main.cpp
// author      : allan a. sioson
// description : driver program of puzzle app

#include <QApplication>
#include "puzzle.h"

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);

  Puzzle p;
  p.show();

  return app.exec();
}

