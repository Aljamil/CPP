// Problem ID: 131023
// Name: Al Jamil L. Arazas (ID 2012-1-0712)
// Honor Code:  I have not given nor received any unauthorized help in this work.

#include <iostream>
using namespace std;

int main()
{
   int x; // Dividend
   int y; // Divisor
   int q; // Qoutient
   int r; // Remainder
   cin >> x;
   cin >> y;
   q = x/y;
   r= x%y;
   cout << x << " divided by " << y << " is " << q << " remainder " << r  << endl;
   
   return 1;
}
