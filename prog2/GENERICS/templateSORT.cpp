// Problem ID: 1031054
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include <iostream>
using namespace std;

template <typename D>

void selectSort(D x[], int n)
{
  for (int i = 0; i < n; i++)
  {
    int si = i;
    for (int j = i+1; j < n; j++)
      if (x[j] < x[si])
        si = j;
    if (si != i)
    {
      D t = x[si];
      x[si] = x[i];
      x[i] = t;
    }
  }
}
/*
int main()
{
  string x[] = {"dog", "cat"};
  selectSort(x, 2) << endl;

  for (int i = 0; i < 2; i++)
    cout << x[i] << " ";
  cout << endl;

  return 0;
} 
*/
