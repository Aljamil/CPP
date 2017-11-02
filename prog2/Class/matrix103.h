// matrix103.h

#ifndef MATRIX103_H
#define MATRIX103_H

#include <iostream>
using namespace std;

class Matrix {
  double **data;
  int nrows, ncols;
public:
  Matrix (int nr, int nc)
  {
    nrows = nr;
    ncols = nc;
    data = new double *[nrows];
    for (int r = 0; r < nrows; r++)
      data[r] = new double[ncols]; 
  }
  void read()
  {
    for (int r = 0; r < nrows; r++)
      for (int c = 0; c < ncols; c++)
        cin >> data[r][c]; 
  }
  void print()
  {
    for (int r = 0; r < nrows; r++)
    {
      for (int c = 0; c < ncols; c++)
        cout << data[r][c] << " ";
      cout << endl;
    } 
  }
  friend bool isLowerTriangular ( Matrix A );
  friend bool isIdentity ( Matrix A );
  friend void doER1 ( double k, int r, Matrix &A );
  friend void doER2 ( double k, int a, int b, Matrix &A );
  friend Matrix operator/ ( Matrix B, double k );
};

#endif
