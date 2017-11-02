// Problem ID: 1031061 
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include <iostream>
#include <vector>
using namespace std;

int searchKey(vector <int> x, int key)
{
  for(int i = 0; i < x.size(); i++)
    if ( x[i] == key)
        return i;
        
       return -1;
}
/*
int main()
{
  vector <int> x;
  x.push_back(30);
  x.push_back(10);
  cout << searchKey(x,10) << endl;
  cout << searchKey(x,-5) << endl;

  return 0;
}
*/
