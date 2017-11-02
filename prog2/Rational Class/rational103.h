// rational103.h

#ifndef RATIONAL103_H
#define RATIONAL103_H

#include <iostream> 
#include <istream>
#include <ostream>
using namespace std;

class Rational {
  long n, d;
public:
  Rational (long _n, long _d)
  {
    n = _n; d = _d;
  }
  friend ostream & operator<< (ostream &out, Rational x);
  friend istream & operator>> (istream &in, Rational &x);
  friend Rational operator+ (Rational x, Rational y);

  friend Rational operator- (Rational x, Rational y);
  friend Rational operator* (Rational x, Rational y);
  friend Rational operator/ (Rational x, Rational y);
  friend Rational operator+ (long k, Rational y);
  friend Rational toLowestTerms (Rational x);
  
  friend Rational operator + (Rational x, long y);
};

#endif

