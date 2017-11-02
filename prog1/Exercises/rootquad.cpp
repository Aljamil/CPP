// Problem ID: 131052
// Name : Al Jamil L. Arazas
// Honor Code: I have not given nor received any unauthorized help in this work.

# include <iostream>
# include <cmath>
using namespace std;

int main()
{
   double a, b, c, d;
   cin >> a >> b >> c;
   d = (b * b - 4 * a * c);
	
   if ( d < 0){
   cout << "no roots" << endl;
   }
   if  ( d >= 0){
   cout << "roots are " << (-b - sqrt (d))/ (2 * a) << " and " << (-b + sqrt (d)) / (2 * a) << endl;
   }
	
   return 1;
}
