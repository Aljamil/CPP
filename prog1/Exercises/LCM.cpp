// Problem ID: 131065
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

# include <iostream>
using namespace std;

int gcd(int m, int n)
{
   int a = m;
   int b = n;
   while (b != 0)
   {
   int t = a % b;
       a = b;
       b = t;
		
   }
   return a;
}  
int lcm(int m, int n)
{
   int a = m;
   int b = n;
   return (a*b)/gcd(a,b);
}
 /*   
int main()
{
   int w = 12, x = 21;
   cout <<lcm(w, x) << endl;
   return 0;
}
*/
