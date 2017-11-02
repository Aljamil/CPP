// Problem ID: 1031062
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include <iostream>
#include <vector>
using namespace std;

void insertUnique(vector <int> &x, int item)
{
 
  for(int i = 0; i < x.size(); i++)
  {
   if (x[i] == item)
      break;
   else
     if (i == x.size() - 1)
       x.push_back(item);
     else
      continue;
   }          
}
/*
int main()
{
  vector <int> x;
  x.push_back(30);
  x.push_back(10);
  insertUnique(x,4);
  insertUnique(x,4);
  insertUnique(x,30);
  insertUnique(x,-3);

  for (int i = 0; i < x.size(); i++)
    cout << x[i] << " ";
  cout << endl;

  return 0;
}
*/
