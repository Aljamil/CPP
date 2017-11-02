// Problem ID: 1031032 
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include <iostream>
#include "matrix103.h"
using namespace std;

bool isIdentity( Matrix A )
{
	if (A.nrows != A.ncols)
	   return false;
	
	for (int i = 0; i < A.nrows - 1; i++)
	{
		if (A.data[i][i] != 1)
		  return false;
	}
	
	for(int r = 1; r < A.nrows; r++)
    for( int c = 0; c < r; c++)
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

  if (isIdentity(A))
    cout << "is identity matrix" << endl;
  else
    cout << "is NOT identity matrix" << endl;

  return 1;
}
*/



