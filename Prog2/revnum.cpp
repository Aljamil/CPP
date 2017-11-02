// Problem ID: 1031014
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include <iostream>
using namespace std;

unsigned int rev(unsigned int x, unsigned int L)
{
  if (x / 10 == 0)
     return x;
  else
    return (x % 10) * L + rev(x / 10, L / 10 );
}

int main()
{
  cout << rev(123,100) << endl;
  cout << rev(1003,1000) << endl;
  return 0;
}







