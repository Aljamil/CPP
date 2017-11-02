// Problem ID: 1031035
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include <iostream>
#include "matrix103.h"

Matrix operator/ ( Matrix A, double b )
{
  Matrix Quo(A.nrows,A.ncols);
	for(int r=0; r<A.nrows; r++) {
		for(int c=0; c<A.ncols; c++) {
			Quo.data[r][c] = A.data[r][c] / b;
		}
	}
	return Quo;	
}

int main()
{
  Matrix A(5,5);

  A.read();

  cout << "A = " << endl;
  A.print();

  A = A / 2;

  cout << "A = " << endl;
  A.print();

  return 1;
}

