// Problem ID: 1031101
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include <iostream>
#include <cmath>
using namespace std;

void nomial(int *coef , int *pow , bool space)
{	

	if(space)
	{
	if(*coef < 0)
		cout << "-";
    }
	else
	{  
    
	if(*coef < 0)
		cout << "- ";
	else
		cout << "+ ";
    }
	
	int var = abs(*coef);
	if(var != 1 || *pow == 0)
		cout << var << " ";
    
    
    if(*pow == 0 || *coef == 0) 
	{
        cout << "";
    }
    
    else if(*pow == 1) 
	{
        cout << "x" << " ";
    }
    
    else 
	{
        cout << "x^" << *pow << " ";
    }
}

void poly(int coef[], int pow[] , int length){
	bool isZero = true;
	bool isFirst = true;
	for(int i = 0 ; i < length ; i++)
	{
	if(coef[i] == 0)
		continue;
	if(isFirst)
	{
	  isZero = false;
	  nomial(&coef[i] , &pow[i] , isFirst);
	  isFirst = false;
	}
	else
	{
		nomial(&coef[i] , &pow[i] , isFirst);

	}
	}
	if(isZero)
	  cout << "0";
}


int main()
{
	int num, k, a, p;
	int *coef, *pow;
	
	cin >> num;
	for (int i = 0; i < num; i++)
	{
	  cin >> k; 	
	
	coef = new int[k];
	pow = new int[k];
	
	if (k == 0)
	 "error(invalid input)";
	else
	 for( a = 0, p = 0; a < k, p < k; a++, p++)
	 {
	 	cin >> coef[a];
	 	cin >> pow[p];
	 	
	 }
	cout << "y = ";
	  poly(coef, pow, k);
	    cout << endl;
			
	  for(int a = 0, p = 0 ; a < k, p < k ; a++, p++)
		{	
		if(pow[p] == 0)
			coef[a] = 0;
		else
			coef[a] = coef[a] * pow[p];
			pow[p] -= 1;
			
		}
		cout << "Dx[y] = ";
		  poly(coef, pow, k);
		cout << endl;
    }
	delete [] coef;
	delete [] pow;

	return 0;	
	
}
