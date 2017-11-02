// filename    : calc.h
// description : contains the definition of the Calc class
// authors     : allan sioson (provided the initial template)
//
// student     :Al Jamil L. Arazas (ID: 2012-1-0712)
// modified    :
//
//   1. Make the outputBox non-editable so it can read only the answer.
//   2. Resize the size of the inputBox in one line.
// implemented :
//
//   1. Implement the action of Multiplication button to multiply the input.
//   2. Implement the action of Subtraction button to subtract the input.
//   3. Implement the action of Division button to divide the input. 
//   4. Implement the action of Modulo button to get the remainder in integer.
//   5. Implement the action of Clear button to erase the answer in the outputBox and return it in 0.  
// Honor code :I have not given nor received any unauthorized help in this work.

#ifndef CALC_H
#define CALC_H

#include <QWidget>
#include <QTextEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

class Calc : public QWidget
{
    Q_OBJECT

    QTextEdit *inputBox;
    QTextEdit *outputBox;
    QPushButton *addButton;
    QPushButton *mulButton;
    QPushButton *subButton;
    QPushButton *divButton;
    QPushButton *modButton;
    QPushButton *clearButton;

    QHBoxLayout *layer1Layout;
    QHBoxLayout *layer2Layout;
    QVBoxLayout *leftSideLayout;
    QHBoxLayout *mainLayout;

    double accum;

public:
    explicit Calc(QWidget *parent = 0);

signals:

public slots:
    void doAdd();
    void doMultiply();
    void doSubtract();
    void doDivide();
    void doModulo();
    void doClear();


};

#endif // CALC_H

