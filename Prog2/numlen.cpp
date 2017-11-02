// Problem ID: 1031013
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include <iostream>
using namespace std;

int numLength(unsigned int x)
{
  if (x < 10)
     return 1;
  else
     return numLength(x/10) + 1;
}

int main()
{
  cout << numLength(0) << endl;
  cout << numLength(8933) << endl;
  cout << numLength(213) << endl;

  return 0;
}


