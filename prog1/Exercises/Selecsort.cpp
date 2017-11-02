// Problem ID: 131095
// Name : Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include <iostream>
using namespace std;

void doSelectionSort(double a[], int N, int &swapCount)
{

    swapCount = 0;
    for (int i = 0; i <= N - 2; i++)
    {
       int min_i = i;
       for(int j = i + 1; j <= N - 1; j++)
       {
          if(a[min_i] > a[j])
          {
            min_i = j;
          }
       }
          if(min_i > i)
          {
            double old = a[min_i];
            a[min_i] = a[i];
            a[i] = old;
            swapCount++;
          }
	}
}


int main()
{
  double x[] = {9.4, 6.1, 3.7, 6.1, -9};

  int count = -1;

  doSelectionSort(x, 5, count);

  for (int i = 0; i < 5; i++)
  cout << x[i] << " ";
  cout << endl;

  cout << "number of swaps = " << count << endl;

  return 0;
}



