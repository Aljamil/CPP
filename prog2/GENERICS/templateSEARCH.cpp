// Problem ID : 1031053
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include <iostream>
using namespace std;

template <typename C>

int linearSearch(C x[], C key, int n)
{
  for (int i = 1; i < n; i++)
    if (x[i] == key)
      return i;

  return -1;
}

int main()
{
  string x[] = {"dog", "cat"};
  cout << linearSearch(x, "cat", 2) << endl;

  return 0;
}

