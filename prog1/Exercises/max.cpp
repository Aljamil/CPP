// Problem ID: 131062
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

# include <iostream>
using namespace std;

int getMax (int a, int b, int c)
{
   if ((a > b) && (a > c))
   return a;
   else if ((b > a) && (b > c))
   return b;
   else return c;
}
/*
int main()
{
   int x = 7, y = 13, z = 4;
   cout << getMax(x, y, z) << endl;
   
   return 0;
}
*/

