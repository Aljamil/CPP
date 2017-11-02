// Problem ID: 131045 
// Name: Al Jamil L. Arazas (ID 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include <iostream>
using namespace std;

int main()
{
   unsigned int m, a, b, sum = 0;
   cin >> m >> a >> b;
   for (int i = a; i <= b; i++)
   if (i % m == 0)
   sum = sum+i;
  
   cout << sum << endl;

   return 0;
}
