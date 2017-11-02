// Problem ID: 1031031
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include <iostream>
#include "matrix103.h"
using namespace std;

bool isLowerTriangular( Matrix A )
{
  if (A.nrows != A.ncols) 
     return false;

  if (A.nrows <= 0) 
     return false;

  for (int i = 0; i <= A.nrows - 1; i++ )
    if ( A.data[i][i] == 0 ) 
      return false;

  for(int r = 1; r < A.nrows; r++)
    for( int c = r + 1; c < A.ncols; c++)
      if( A.data[r][c] != 0)
        return false;

  return true;
}
/*
int main()
{
  Matrix A(5,5);

  A.read();

  cout << "A = " << endl;
  A.print();

  if (isLowerTriangular(A))
    cout << "is lower triangular" << endl;
  else
    cout << "is NOT lower triangular" << endl;

  A.read();

  cout << "A = " << endl;
  A.print();

  if (isLowerTriangular(A))
    cout << "is lower triangular" << endl;
  else
    cout << "is NOT lower triangular" << endl;

  return 1;
}
*/
