// Problem ID: 1031005
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include <iostream>
using namespace std;

int getMin (int x[], int n)
{
  if (n == 0)
     "error(invalid input)";
  else if (n == 1)
     return x[0];
  else if (getMin(x, n - 1) < x[n - 1])
     return getMin(x, n - 1);
  else
     return x[n - 1];
}

/*
int main()
{
  int a[3] = {2,9,-3};

  cout << getMin(a,1) << endl;
  cout << getMin(a,3) << endl;
  return 0;
}
*/



