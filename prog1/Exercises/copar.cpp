// Problem ID: 131093
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.
 

# include <iostream>
using namespace std;

void copyArray (double a[], double b[], int N)
{
  for (int i = 0; i <= N - 1; i++)
  {
   b[i] = a[i];
  }	
}

/*
int main()
{
  double x[] = {9.4, 6.1, 3.7, 6.1, -9};

  double y[3];

  copyArray(x, y, 3);


  for (int i = 0; i < 3; i++)
    cout << y[i] << endl;

  return 0;
}
*/

