// Problem ID: 1031023
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include <iostream>
using namespace std;

int count(int *p)
{
  int count = 0;
  for (int i = 0; i < *p;*p++)
  {
   count++;
  } 
   return count;
}


int main()
{
  int a[] = {3, 11, 9, 101, -1, 5};

  cout << count(a) << endl;
  cout << count(a+2) << endl;

  return 0;
}
