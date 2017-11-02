// Problem ID: 1031024
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include <iostream>
using namespace std;

int count(char *p)
{
  int n = 0;
  while (*p != 0)
  {
    *p++;
     n++;
  }
  return n;
}

int main()
{
  char s[] = "hello there";

  cout << count(s) << endl;
  cout << count(s+6) << endl;

  return 0;
}

