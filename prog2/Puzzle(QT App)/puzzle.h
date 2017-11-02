// filename    : puzzle.h
// description : contains the definition of the Puzzle class
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

#ifndef PUZZLE_H
#define PUZZLE_H

#include <QMainWindow>
#include <QPushButton>
#include <QMessageBox>
#include <QAction>
#include <QMenu>
#include <QMenuBar>

#include <iostream>

class Puzzle : public QMainWindow
{
    Q_OBJECT

    QPushButton *tile[15];
    QMenu *Option;
    QAction *random;
    QAction *exit;

    int pos[15];
    int emptyPos;
    int emptyXLoc;
    int emptyYLoc;

    void move(int x);


    bool isSolved();

public:
    explicit Puzzle(QWidget *parent = 0);

signals:

public slots:
    void randomize();
    void moveTile1();
    void moveTile2();
    void moveTile3();
    void moveTile4();
    void moveTile5();
    void moveTile6();
    void moveTile7();
    void moveTile8();
    void moveTile9();
    void moveTile10();
    void moveTile11();
    void moveTile12();
    void moveTile13();
    void moveTile14();
    void moveTile15();

};

#endif // PUZZLE_H
