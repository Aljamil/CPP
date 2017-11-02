// Problem ID: 1031015
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include <iostream>
using namespace std;

unsigned int gcd(unsigned int a, unsigned int b)
{
  if (b == 0)
     return a;
  else 
     return gcd(b, a % b);
}

int main()
{
  cout << gcd(123,321) << endl;
  cout << gcd(12,16) << endl;
  return 0;
}

