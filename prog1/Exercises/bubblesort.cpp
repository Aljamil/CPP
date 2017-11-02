// Problem ID: 131094
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

# include <iostream>
using namespace std;

void doBubbleSort (double a[], int N, int &swapCount)
{
    double Last = N - 2;
    swapCount = 0;
    for (int k = 0; k <= N - 2; k++)
    {
        for (int i = 0; i <= Last; i++)
	        if (a[i] > a[i + 1])
            {
              double old = a[i + 1];
              a[i + 1] = a[i];
              a[i] = old;
              swapCount++;
            }
         Last = Last - 1;
	}
}


int main()
{
  double x[] = {9.4, 6.1, 3.7, 6.1, -9};

  int count = -1;

  doBubbleSort(x, 5, count);

  for (int i = 0; i < 5; i++)
  cout << x[i] << " ";
  cout << endl;

  cout << "number of swaps = " << count << endl;

  return 0;
}





