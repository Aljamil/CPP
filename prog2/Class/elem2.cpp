// Problem ID: 1031034
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include <iostream>
#include "matrix103.h"
using namespace std;

void doER2( double k, int a, int b, Matrix & A )
{
  if(a >= A.nrows)
       return; 
  if (b >= A.nrows)
      return;
	for(int c = 0 ; c <= A.ncols - 1 ; c++) 
	   A.data[a][c] = A.data[a][c] - k * A.data[b][c]; 	
}
/*
int main()
{
  Matrix A(5,5);

  A.read();

  cout << "A = " << endl;
  A.print();

  doER2(1, 0, 1, A);

  cout << "A = " << endl;
  A.print();

  return 1;
}
*/
