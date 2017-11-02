// Problem ID: 1031022
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include <iostream>
using namespace std;

void multiply(int k, int *p, int n)
{
  for (int i = 0; i < n; i++)
  {
     *p = *p*=k;
     *p++;
  }
}


int main()
{
  int k = -2;
  int a[] = {3, -1, 5};

  multiply(k, a, 3);

  for (int i = 0; i < 3; i++)
    cout << a[i] << " ";
  cout << endl;

  return 0;
}
