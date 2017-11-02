// Problem ID: 1031102
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include <iostream>
#include <cmath>
using namespace std;

class Matrix 
{
  int ncols;
  int nrows;	
  double **data;
  
  public:
  Matrix (int nr, int nc)
  {
    nrows = nr;
    ncols = nc;
    data = new double *[nrows];
    for (int r = 0; r < nrows; r++)
      data[r] = new double[ncols]; 
  }
  
  ~Matrix()
	{
		for (int r = 0; r < nrows; r++)
		  delete data[r];
		  delete data;
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
      {
      	if (abs(data[r][c]) == -0)
	       data[r][c] = 0;
      
        cout << data[r][c] << " ";
      }
	     cout << endl;
    
      
    } 
  }
  
  void size(int nr, int nc)
  {
		for (int r = 0; r < nrows; r++)
		  delete data[r];
		  delete data;
		  
		nrows = nr;
		ncols = nc;
		data = new double*[nrows];
		for (int r = 0; r < nr; r++)
		data [r] = new double[ncols];
	
	
   }  
  friend void er1( double k, int r, Matrix &A );
  friend void er2 ( double k, int a, int b, Matrix &A );
  friend void er3(int a, int b, Matrix &A);	
};

void er1( double k, int r, Matrix & A ) 
{ 
   if(r >= A.nrows)
       return; 
	for(int c = 0 ; c <= A.ncols - 1 ; c++)
	{ 
	   A.data[r][c] = k * A.data[r][c];
	   
	}
	   
}

void er2( double k, int a, int b, Matrix & A )
{
  if(a >= A.nrows)
       return; 
  if (b >= A.nrows)
      return;
	for(int c = 0 ; c <= A.ncols - 1 ; c++)
	{ 
	   A.data[a][c] = A.data[a][c] -  A.data[b][c] * k;
    }
}

void er3(int a, int b, Matrix &A)
{
	
    if (a >= A.nrows)
       return;
    if (b >= A.nrows)
       return;
       
    for (int c = 0; c <= A.ncols - 1 ; c++)
    {
       double temp = A.data[a][c];
       A.data[a][c] = A.data[b][c];
       A.data[b][c] = temp;
    }
}


int main()
{
  string input;
  int a, b, r, c;
  double k;
  Matrix A(r,c);
  
  do
  {
  	cin >> input;
  	
  	if (input == "size")
  	{
  		cin >> r >> c;
  		A.size(r, c);
  	}
  	if (input == "data")
  	{
  		A.read();
  	}
  	
  	if (input == "er1")
  	{
  		cin >> k >> r;
  		er1(k, r, A);
  		A.print();
  		cout << endl;
  	}
  	
  	if (input == "er2")
  	{
  		cin >> k >> a >> b;
		er2(k, a, b, A);
		A.print();
		cout << endl;
		 
  	}
  	
  	if (input == "er3")
		{
			cin >> a >> b;
			er3(a, b, A);
			A.print();
			cout << endl;
		}
			
    }
    while (input != "exit");
  	
  	return 0;
}
