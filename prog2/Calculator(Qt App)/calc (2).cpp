// filename    : calc.cpp
// description : contains the implementation of the methods
//               of Calc class
// authors     : allan sioson (provided the initial template)
//
// student     :Al Jamil L. Arazas (ID: 2012-1-0712)
// modified    :
//
//   1. Make the outputBox non-editable so it can read only the answer.
//   2. Resize the size of the inputBox in one line.
//   3. Change the size of a PushButton to make style.
// implemented :
//
//   1. Implement the action of Multiplication button to multiply the input.
//   2. Implement the action of Subtraction button to subtract the input.
//   3. Implement the action of Division button to divide the input. 
//   4. Implement the action of Modulo button to get the remainder in integer.
//   5. Implement the action of Clear button to erase the answer in the outputBox and return it in 0.  
// Honor code :I have not given nor received any unauthorized help in this work.

#include "calc.h"

Calc::Calc(QWidget *parent) :
    QWidget(parent)
{
    inputBox = new QTextEdit;
    outputBox = new QTextEdit;
    addButton = new QPushButton("+");
    mulButton = new QPushButton("*");
    divButton = new QPushButton("/");
    subButton = new QPushButton("-");
    modButton = new QPushButton("%");
    clearButton = new QPushButton("C");

    layer1Layout = new QHBoxLayout;
    layer2Layout = new QHBoxLayout;
    mainLayout = new QHBoxLayout;
    leftSideLayout = new QVBoxLayout;

    layer1Layout->addWidget(addButton);
    layer1Layout->addWidget(subButton);
    layer1Layout->addWidget(clearButton);

    layer2Layout->addWidget(mulButton);
    layer2Layout->addWidget(divButton);
    layer2Layout->addWidget(modButton);

    leftSideLayout->addWidget(inputBox);
    leftSideLayout->addLayout(layer1Layout);
    leftSideLayout->addLayout(layer2Layout);

    mainLayout->addLayout(leftSideLayout);
    mainLayout->addWidget(outputBox);

    setLayout(mainLayout);

    accum = 0.0;

    

    QObject::connect(addButton,SIGNAL(clicked()),this,SLOT(doAdd()));
    QObject::connect(mulButton,SIGNAL(clicked()),this,SLOT(doMultiply()));
    QObject::connect(subButton,SIGNAL(clicked()),this,SLOT(doSubtract()));
    QObject::connect(divButton,SIGNAL(clicked()),this,SLOT(doDivide()));
    QObject::connect(modButton,SIGNAL(clicked()),this,SLOT(doModulo()));
    QObject::connect(clearButton,SIGNAL(clicked()),this,SLOT(doClear()));
    
    inputBox->setFixedSize(300,20);
    addButton->setFixedSize(30,30);
    mulButton->setFixedSize(30,30);
    subButton->setFixedSize(30,30);
    divButton->setFixedSize(30,30);
    modButton->setFixedSize(30,30);
    clearButton->setFixedSize(30,30);
    outputBox->setReadOnly(true);

}

void Calc::doAdd()
{
   outputBox->append(
               QString::number(accum)
               + " + "
               + inputBox->toPlainText());

   accum = accum + (inputBox->toPlainText()).toDouble();

   outputBox->append("= " + QString::number(accum));
}

void Calc::doMultiply()
{
    outputBox->append(
                QString::number(accum)
                + " * "
                + inputBox->toPlainText());

    accum = accum * (inputBox->toPlainText()).toDouble();

    outputBox->append("= " + QString::number(accum));
}

void Calc::doSubtract()
{
    outputBox->append(
                QString::number(accum)
                + " - "
                + inputBox->toPlainText());

    accum = accum - (inputBox->toPlainText()).toDouble();

    outputBox->append("= " + QString::number(accum));

}

void Calc::doDivide()
{
    outputBox->append(
                QString::number(accum)
                + " / "
                + inputBox->toPlainText());

    accum = accum / (inputBox->toPlainText()).toDouble();

    outputBox->append("= " + QString::number(accum));

}

void Calc::doModulo()
{
    outputBox->append(
                QString::number(accum)
                + "%"
                + inputBox->toPlainText());

    accum = (int)accum  % (inputBox->toPlainText()).toInt();

    outputBox->append("= " + QString::number(accum));

}

void Calc::doClear()
{
    outputBox->clear();
    accum = 0;

}


