// Problem ID: 1031042
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code:

#include "rational103.h"

Rational operator* (Rational x, Rational y)
{
  long a = x.n;
  long b = x.d;
  long c = y.n;
  long d = y.d;

 return Rational(a * c, b * d);
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
  cout << (x * y) << endl;
}
*/
