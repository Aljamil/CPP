// Problem ID: 1031011
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include <iostream>
using namespace std;

int getMinLoc(int x[], unsigned int n)
{
  if (n == 0)
     return -1;
  else if (n == 1)
     return 0;
  else if (x[getMinLoc(x, n - 1)] < x[n - 1])
    return getMinLoc(x, n - 1);
  else
     return n-1;
}

int main()
{
  int a[3] = {9,-3,2};

  cout << getMinLoc(a,1) << endl;
  cout << getMinLoc(a,0) << endl;
  cout << getMinLoc(a,3) << endl;
  return 0;
}

