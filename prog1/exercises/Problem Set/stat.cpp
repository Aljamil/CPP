// Problem ID: 131092
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

# include <iostream>
# include <cmath>
using namespace std;


int main()
{
   int N;
   double n;
   double Max = -1000 ;
   double Min = 1000 ;
   double Sumx = 0;
   double Sumxx = 0;
	
   double mean, variance, SD;
	
   cin >> N;
   for (int i = 0; N > i; i++) {
   cin >> n;	
   Sumx = Sumx+n;
   Sumxx += pow (n, 2);
	
	
   if (Min > n)
   {
   Min = n;
   }
	
   else if (Max < n)
   {
   Max = n;
   }	
	
   mean = Sumx / N;
   variance = (Sumxx / N -  pow (mean, 2));
   SD = sqrt ( variance);
   }
   cout << Min << " " << Max << " " << mean << " " << variance << " " << SD << endl; 
	
   return 1;
}


