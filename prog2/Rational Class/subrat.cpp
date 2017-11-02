// Problem ID: 1031041 
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code:I have not given nor received any unauthorized help in this work. 

#include <iostream>
#include "rational103.h"

using namespace std;

Rational operator-(Rational x, Rational y)
{
 long a = x.n;
 long b = x.d;
 long c = y.n;
 long d = y.d;

  return Rational(a * d - c * b, b * d);
}
/*
ostream & operator<< (ostream &out, Rational x)
{
  if (x.d < 0)
    out << -x.n << "/" << -x.d;
  else
    out << x.n << "/" << x.d;
  return out;
}

int main()
{
  Rational x(2,3), y(1,2);
  cout << (x - y) << endl;
}
*/
