// Problem ID: 1031052
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include <iostream>
using namespace std;

template <typename B>

B getMin(B x[], int n)
{
  if (n > 0)
  {
    B minVal = x[0];
    for (int i = 1; i < n; i++)
      if (x[i] < minVal)
        minVal = x[i];
    return minVal;
  }
  else
    throw "empty array";
}
/*
int main()
{
  string x[] = {"dog", "cat"};
  cout << getMin(x, 2) << endl;

  return 0;
}
*/
