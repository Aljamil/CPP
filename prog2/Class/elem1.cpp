// Problem ID: 1031033
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include <iostream>
#include "matrix103.h"

using namespace std;

void doER1( double k, int r, Matrix & A ) 
{ 
   if(r >= A.nrows)
       return; 
	for(int c = 0 ; c <= A.ncols - 1 ; c++) 
	   A.data[r][c] = k * A.data[r][c]; 
}

int main()
{
  Matrix A(5,5);

  A.read();

  cout << "A = " << endl;
  A.print();

  doER1(0.5, 1, A);

  cout << "A = " << endl;
  A.print();

  return 1;
}

