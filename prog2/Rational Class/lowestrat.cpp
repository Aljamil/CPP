// Problem ID: 1031045
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code:I have not given nor received any unauthorized help in this work.

#include "rational103.h"
#include <iostream>

using namespace std;

Rational toLowestTerms (Rational x)
{
  long a = x.n;
  long b = x.d;
  long term, lcd;

  while (b != 0)
  {
   term = a;
   a = b;
   b = term%b;

   if ( a == 0)
   {
      lcd = b;
   }

   
   else if (b == 0)
   {
      lcd = a;
   }
   }
    
   return Rational( x.n / lcd , x.d / lcd);
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
  Rational x(8,12);
  cout << toLowestTerms ( x ) << endl;
}
*/
