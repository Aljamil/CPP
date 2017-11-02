// Problem ID: 131054
// Name : Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

# include <iostream>
# include <cmath>
using namespace std;

int main ()
{
   double d;
   cin >> d;
   cout << "cos (" << d << " degrees) is " << cos (d*acos(-1)/180) << endl;
   cout << "sin (" << d << " degrees) is " << sin (d*acos(-1)/180) << endl;
   cout << "tan (" << d << " degrees) is " << tan (d*acos(-1)/180) << endl; 

   return 1;
}

