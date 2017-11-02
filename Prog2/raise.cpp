// Problem ID: 1031004
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include <iostream>
using namespace std;

int raiseTo(int x, int n)
{
  if (n == 0)
    return 1;
  
  else 
     return raiseTo(x,n-1)*x;
}


int main()
{
  cout << raiseTo(3,2) << endl;
  cout << raiseTo(10,5) << endl;
  return 0;
}

