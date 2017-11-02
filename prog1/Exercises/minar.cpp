// Problem ID: 131085
// Name : Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include <iostream>
using namespace std;

double getMin (double a[], int N)
{
   double min = a[0];
   for (int i = 0; i < N; i++)
   if (min > a[i])
   {
   min = a[i];
   }
   return min ;
}


int main()
{
   double x[] = {9.7, 6.2, 1.3};
   cout << getMin(x, 3) << endl;
   return 0;
}


