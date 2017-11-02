// Problem ID: 131092
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.
 
# include <iostream>
using namespace std;

int countInstances (double x, double a[], int N)
{
   int count = 0;
   for (int i = 0; i <= N - 1; i++)
   {
    if (a[i] == x)
    count++;
   }
   return count;
}

/*
int main()
{
   double x[] = {9.4, 6.1, 3.7, 6.1, -9};

   cout << countInstances(6.1, x, 5) << endl;
   cout << countInstances(7, x, 5) << endl;

   return 0;
}
*/



