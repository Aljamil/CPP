// Problem ID: 1031063
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include <iostream>
#include <vector>
using namespace std;

void deleteItem(vector <int> &x, int item)
{
  for (int i = 0; i < x.size(); i++)
    if (x[i] == item)
      x.erase(x.begin() + i);
}
/*
int main()
{
  vector <int> x;
  x.push_back(30);
  x.push_back(10);
  deleteItem(x,4);
  deleteItem(x,30);

  for (int i = 0; i < x.size(); i++)
    cout << x[i] << " ";
  cout << endl;

  return 0;
}
*/