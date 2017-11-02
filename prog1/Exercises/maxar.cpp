// Problem ID: 131084
// Name : Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include <iostream>
using namespace std;

double getMax (double a[], int N)
{
   double max = a[0];
   for (int i = 0; i < N; i++)
   if (max < a[i])
   {
   max = a[i];
   }
   return max ;
}

/*
int main()
{
   double x[] = {1.3, 6.2, 9.7};
   cout << getMax(x, 3) << endl;
   return 0;
}
*/

