// Problem ID:  131091
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include <iostream>
#include <cmath>
using namespace std;


int main()
{
   int N, M, L;
   double X,Y,Z;
   double S, A ;
   cin >> N;
   for (int i = 0; i < N; i++)
{
   cin >> X >> Y >> Z;
  	
   S = ((X + Y + Z)/2);
   A = sqrt(S*(S-X)*(S-Y)*(S-Z));
 
   L = ((X + Y + Z)/2);
   M = sqrt(L*(L-X)*(L-Y)*(L-Z));
 
  
     if((S != L || A != M  ) && (A > 0))
       {
        cout << X << " " << Y << " " << Z << " : TRIANGLE WITH AREA " << A << " UNITS SQUARED"<< endl;
       }
		
     else if ((S == L || A == M) && (A > 0))
       {
        cout << X << " " << Y << " " << Z << " : RIGHT TRIANGLE WITH AREA " << A << " UNITS SQUARED"<< endl;
       }
		
     else if (A==0)
       {
        cout << X << " " << Y << " " << Z << " : NOT A TRIANGLE " << endl ;
       }		
		
     else 
       {
        cout << X << " " << Y << " " << Z << " : NOT A TRIANGLE " << endl ;
       }
 }
     return 1;
}

    
	
	
	   
        

       
