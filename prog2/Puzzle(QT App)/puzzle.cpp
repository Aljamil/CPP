// filename    : puzzle.cpp
// description : contains the implementation of the methods
//               of Puzzle class
// authors     : allan sioson (provided the initial template)
//
// student     : [Al Jamil L. Arazas (ID:2012-1-0712)]
// modified    :
//
//   1. [Resize the button of tiles to change size by 100]
//   2. [Add 7 buttons to become 4 by 4 puzzle]
//
// implemented :
//
//   1. [The 7 buttons label to become complete]
//   2. [Complete the action function to move the tiles]
//   3. [Add 2 Action in MenuBar to command random and quit of the game.]
// honor code  :
//
//   [I have not given nor received any unauthorized help in this work.]

#include "puzzle.h"

Puzzle::Puzzle(QWidget *parent) :
    QMainWindow(parent)
{

  Option = new QMenu(this);
  Option = menuBar()->addMenu(tr("&File"));

  random = new QAction(tr("&Random"), this);
  exit = new QAction("&Exit", this);

   Option->addAction(random);
   Option->addAction(exit);

  setFixedSize(400,400);

  emptyPos = 16;
  emptyXLoc = 300;
  emptyYLoc = 300;

  for (int i = 0; i < 15; i++)
  {
    tile[i] = new QPushButton(QString::number(i + 1),this);
    tile[i]->resize(100,100);
    pos[i] = i + 1;
  }

  tile[0]->move(0,0);
  tile[1]->move(100,0);
  tile[2]->move(200,0);
  tile[3]->move(300,0);

  tile[4]->move(0,100);
  tile[5]->move(100,100);
  tile[6]->move(200,100);
  tile[7]->move(300,100);

  tile[8]->move(0,200 );
  tile[9]->move(100,200);
  tile[10]->move(200,200 );
  tile[11]->move(300,200);

  tile[12]->move(0,300);
  tile[13]->move(100,300);
  tile[14]->move(200,300);

  QObject::connect(tile[0], SIGNAL(clicked()),
                   this, SLOT(moveTile1()));

  QObject::connect(tile[1], SIGNAL(clicked()),
                   this, SLOT(moveTile2()));

  QObject::connect(tile[2], SIGNAL(clicked()),
                   this, SLOT(moveTile3()));

  QObject::connect(tile[3], SIGNAL(clicked()),
                   this, SLOT(moveTile4()));

  QObject::connect(tile[4], SIGNAL(clicked()),
                   this, SLOT(moveTile5()));

  QObject::connect(tile[5], SIGNAL(clicked()),
                   this, SLOT(moveTile6()));

  QObject::connect(tile[6], SIGNAL(clicked()),
                   this, SLOT(moveTile7()));

  QObject::connect(tile[7], SIGNAL(clicked()),
                   this, SLOT(moveTile8()));

  QObject::connect(tile[8], SIGNAL(clicked()),
                   this, SLOT(moveTile9()));

  QObject::connect(tile[9], SIGNAL(clicked()),
                   this, SLOT(moveTile10()));

  QObject::connect(tile[10], SIGNAL(clicked()),
                   this, SLOT(moveTile11()));

  QObject::connect(tile[11], SIGNAL(clicked()),
                   this, SLOT(moveTile12()));

  QObject::connect(tile[12], SIGNAL(clicked()),
                   this, SLOT(moveTile13()));

  QObject::connect(tile[13], SIGNAL(clicked()),
                   this, SLOT(moveTile14()));

  QObject::connect(tile[14], SIGNAL(clicked()),
                   this, SLOT(moveTile15()));

  QObject::connect(random, SIGNAL(triggered()),
                  this, SLOT(randomize()));
  QObject::connect(exit, SIGNAL(triggered()),
                  this, SLOT(close()));

  randomize();
}

void Puzzle::move(int i)
{
    if (((tile[i]->y() == emptyYLoc)
          && (abs(tile[i]->x() - emptyXLoc) == 100))
        ||
        ((tile[i]->x() == emptyXLoc)
          && (abs(tile[i]->y() - emptyYLoc) == 100))
       )
    {
      int tx = emptyXLoc;
      int ty = emptyYLoc;
      int tp = emptyPos;

      emptyXLoc = tile[i]->x();
      emptyYLoc = tile[i]->y();
      emptyPos = pos[i];

      tile[i]->move(tx,ty);
      pos[i] = tp;
    }
}

void Puzzle::moveTile1()
{
    move(0);
    if (isSolved())
      QMessageBox::information(this,"message","solved!");
}

void Puzzle::moveTile2()
{
    move(1);
    if (isSolved())
      QMessageBox::information(this,"message","solved!");
}

void Puzzle::moveTile3()
{
    move(2);
    if (isSolved())
      QMessageBox::information(this,"message","solved!");
}

void Puzzle::moveTile4()
{
    move(3);
    if (isSolved())
      QMessageBox::information(this,"message","solved!");
}

void Puzzle::moveTile5()
{
    move(4);
    if (isSolved())
      QMessageBox::information(this,"message","solved!");
}

void Puzzle::moveTile6()
{
    move(5);
    if (isSolved())
      QMessageBox::information(this,"message","solved!");
}

void Puzzle::moveTile7()
{
  move(6);
  if (isSolved())
    QMessageBox::information(this,"message","solved!");
}

void Puzzle::moveTile8()
{
  move(7);
  if (isSolved())
    QMessageBox::information(this,"message","solved!");
}

void Puzzle::moveTile9()
{
  move(8);
  if (isSolved())
    QMessageBox::information(this,"message","solved!");
}

void Puzzle::moveTile10()
{
  move(9);
  if (isSolved())
    QMessageBox::information(this,"message","solved!");
}

void Puzzle::moveTile11()
{
  move(10);
  if (isSolved())
    QMessageBox::information(this,"message","solved!");
}

void Puzzle::moveTile12()
{
  move(11);
  if (isSolved())
    QMessageBox::information(this,"message","solved!");
}

void Puzzle::moveTile13()
{
  move(12);
  if (isSolved())
    QMessageBox::information(this,"message","solved!");
}

void Puzzle::moveTile14()
{
  move(13);
  if (isSolved())
    QMessageBox::information(this,"message","solved!");
}

void Puzzle::moveTile15()
{
  move(14);
  if (isSolved())
    QMessageBox::information(this,"message","solved!");
}

void Puzzle::randomize()
{
  for (int i = 0; i < 1000; i++)
  {
    int z = rand() % 15;
    move(z);
  }
}

bool Puzzle::isSolved()
{
    if ((pos[0] < pos[1])
         && (pos[1] < pos[2])
         && (pos[2] < pos[3])
         && (pos[3] < pos[4])
         && (pos[4] < pos[5])
         && (pos[5] < pos[6])
         && (pos[6] < pos[7])
         && (pos[7] < pos[8])
         && (pos[8] < pos[9])
         && (pos[9] < pos[10])
         && (pos[10] < pos[11])
         && (pos[11] < pos[12])
         && (pos[12] < pos[13])
         && (pos[13] < pos[14])
         && (pos[14] < emptyPos)
       )
      return true;
    else
      return false;

}
