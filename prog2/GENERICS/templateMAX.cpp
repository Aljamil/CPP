// Problem ID: 1031051
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.
 

#include <iostream>
using namespace std;

template <typename A>

A getMax(A x[], int n)
{
  if (n > 0)
  {
    A maxVal = x[0];
    for (int i = 1; i < n; i++)
      if (x[i] > maxVal)
        maxVal = x[i];
    return maxVal;
  }
  else
    throw "empty array";
}
/*
int main()
{
  string x[] = {"dog", "cat"};
  cout << getMax(x, 2) << endl;

  return 0;
}
*/
