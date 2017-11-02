// Problem ID: 1031044
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include "rational103.h"

Rational operator+ (long k, Rational y)
{
  long a = y.n;
  long b = y.d;

  return Rational(k * b + a, b); 
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
  Rational x(2,3);
  cout << (4 + x) << endl;
}
*/
