// Problem ID: 131083
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include <iostream>
using namespace std;

double getSum (double a[], int N)
{
   double sum = 0;
   for (int i = 0; i <= N - 1; i++)
   {
   sum = sum+a[i];
   }
   return sum;
}


int main()
{
   double x[] = {1.3, 6.2, 9.7};
   cout << getSum(x, 3) << endl;
   return 0;
}


