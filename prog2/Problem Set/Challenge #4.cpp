// Problem ID: 1031104
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code:

#include <iostream>
#include <ostream>
#include <istream>

class Rational
{
	long n, d;
	public:
		Rational(long _n, long _d)
		{
			n = _n;
			d = _d;
		}
		
		Rational ()
		{
			n = 0;
			d = 1;
		}
		
  friend istream &operator >> (istream &in, Rational &x);
  friend ostream &operator << (ostream &out,Rational x);
  friend Rational operator+ (Rational x, Rational y);
  friend Rational operator- (Rational x, Rational y);
  friend Rational operator* (Rational x, Rational y);
  friend Rational operator/ (Rational x, Rational y);
		
}

Rational operator+ (Rational x, Rational y)
{
 long a = x.n;
 long b = x.d;
 long c = y.n;
 long d = y.d;

 return Rational(a * d + c * b , b * d );

}

Rational operator- (Rational x, Rational y)
{
 long a = x.n;
 long b = x.d;
 long c = y.n;
 long d = y.d;

 return Rational(a * d - c * b , b * d );

}

Rational operator* (Rational x, Rational y)
{
 long a = x.n;
 long b = x.d;
 long c = y.n;
 long d = y.d;

 return Rational(a * c , b * d );

}

Rational operator/ (Rational x, Rational y)
{
 long a = x.n;
 long b = x.d;
 long c = y.n;
 long d = y.d;

 return Rational(a * d , b * c );

}



ostream &operator << (ostream &out, Rational x)
{

  if (x.d < 0)
    out  << -x.n << "/" << -x.d;
  else
    out << x.n << "/" << x.d;
  
  return out;
}

istream &operator >> (istream &in, Rational &x)
{

  char c;
  in >> x.n;
  in >> c;
  in >> x.d;

  return in;
}

int main()
{
	
}
