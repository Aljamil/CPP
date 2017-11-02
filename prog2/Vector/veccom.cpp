// Problem ID: 1031064
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code:I have not given nor received any unauthorized help in this work.
 
#include <iostream>
#include <vector>
using namespace std;

void getCommon(vector <int> x, vector <int> y, vector <int> &z)
{
   
   for (int i = 0; i < x.size(); i++)
   {
     for (int j = 0; j < y.size(); j++)
       if (x[i] == y[j])
       z.push_back(y[j]);
   }
   		
}

int main()
{
  vector <int> x;
  vector <int> y;
  vector <int> z;

  x.push_back(50);
  x.push_back(10);
  x.push_back(-2);
  y.push_back(50);
  y.push_back(10);
  y.push_back(1);

  getCommon(x,y,z);

  for (int i = 0; i < z.size(); i++)
    cout << z[i] << " ";
  cout << endl;

  return 0;
}




