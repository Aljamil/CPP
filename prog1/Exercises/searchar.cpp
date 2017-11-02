// Problem ID: 131091
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code:I have not given nor received any unauthorized help in this work.


# include <iostream>
using namespace std;

int searchLast (double x, double a[], int N)
{
  for (int i = N - 1; i >= 0; i--)
  {
   if (a[i] == x)
     return i;
  }
   return -1;
}


int main()
{
   double x[] = {9.4, 6.1, 3.7, 6.1, -9};

   cout << searchLast(6.1, x, 5) << endl;
   cout << searchLast(9.4, x, 5) << endl;

   return 0;
}

