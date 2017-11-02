// Problem ID: 131071
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work. 

#include <iostream>
#include <cmath>
#include <string> 
using namespace std;


struct Point2D
{
  double x, y;
};


double  manhattan(Point2D p, Point2D q)
{
   double d;  
   d = fabs (p.x - q.x) + fabs (p.y - q.y);
   return (d);
}	


int main()
{
   Point2D p, q;
   p.x = 3;
   p.y = 2;
   q.x = 5;
   q.y = 1;
   cout << manhattan(p, q) << endl;
}


