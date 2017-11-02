// Problem ID: 1031021
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work. 

#include <iostream>
using namespace std;

void doExchange(int *x, int *y)
{
  int  z = *y;
       *y = *x;
       *x = z;
}

int main()
{
  int x = -34, y = 77;

  cout << x << " " << y << endl;
  doExchange(&x, &y);
  cout << x << " " << y << endl;

  return 0;
}

