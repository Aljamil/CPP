// Problem ID: 1031103
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include <iostream>
#include <ostream>
#include <istream>

using namespace std;

template <class T>

class Rational
{
	T n, d;
	public:
		
		Rational(){
		  n = 0;
		  d = 1;
		}
		
  friend istream &operator >>(istream &in, Rational &k);
  friend ostream &operator <<(ostream &out,Rational k);
  friend Rational operator- (Rational x, Rational y);
  friend Rational operator* (Rational x, Rational y);			
};

template <class D>

class Matrix 
{
  int ncols;
  int nrows;	
  D **data;
  
  public:
  Matrix (int nr, int nc)
  {
    nrows = nr;
    ncols = nc;
    data = new D *[nrows];
    for (int r = 0; r < nrows; r++)
      data[r] = new D [ncols]; 
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
      	if ((data[r][c]) == 0)
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
		data = new D *[nrows];
		for (int r = 0; r < nr; r++)
		data [r] = new D [ncols];
	
	
   }  
  friend void er1( D k, int r, Matrix &A );
  friend void er2 ( D k, int a, int b, Matrix &A );
  friend void er3(int a, int b, Matrix &A);	
};

istream &operator >> (istream &in, Rational &k)
{
  char c;
  in >> x.n;
  in >> c;
  in >> x.d;

  return in;
	
}

ostream &operator <<(ostream &out,Rational &x)
{
  if (x.d < 0)
    out  << -x.n << "/" << -x.d;
     
  else
    out << x.n << "/" << x.d;
  
  return out;
}

Rational operator- (Rational x, Rational y)
{
 int a = x.n;
 int b = x.d;
 int c = y.n;
 int d = y.d;

 return Rational(a * d - c * b , b * d );  
 	
}

Rational operator* (Rational x, Rational y)
{
 int a = x.n;
 int b = x.d;
 int c = y.n;
 int d = y.d;

 return Rational(a * c , b * d );		
}

void er1( D k, int r, Matrix &A) 
{ 
   if(r >= A.nrows)
       return; 
	for(int c = 0 ; c <= A.ncols - 1 ; c++)
	{ 
	   A.data[r][c] = k * A.data[r][c];
	   
	}
	   
}

void er2( D k, int a, int b, Matrix & A )
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
       D temp = A.data[a][c];
       A.data[a][c] = A.data[b][c];
       A.data[b][c] = temp;
    }
}


int main()
{
  string input;
  D a, b, r, c;
  D k;
  Matrix <Rational> A(r,c);
  Matrix <int> A(r, c);
  
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

