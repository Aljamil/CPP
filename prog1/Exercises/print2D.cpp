// Problem ID: 131072
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code:I have not given nor received any unauthorized help in this work. 

#include <iostream>
# include <string>
# include <cmath>
using namespace std;

/*
struct Point2D
{
  double x, y;
};
*/
void print(Point2D p)
{
   cout << "(" << p.x << "," << p.y << ")";
}
  

int main()
{
   Point2D p, q;
   p.x = 3;
   p.y = 2;
   q.x = 5;
   q.y = 1;
   print(p);
   cout << endl;
   print(q);
   cout << endl;
}

