#include <iostream>
using namespace std;

int main()
{
   int size;

   cout << "Enter the size: ";

   cin >> size;

   int a[size][3];
   int b[size * 3];

   for(int i = 0; i < size; i++)
   {
   	for(int j = 0; j < 3; j++)
   	{
   		cin >> a[i][j];
   	}
   }

   cout << "The two dimesion: " << endl;


   for(int i = 0; i < size; i++)
   {
   	for(int j = 0; j < 3; j++)
   	{
   		cout << a[i][j] << " " ;
   	}
   	cout << endl;
   }

   cout << endl;

   

   for(int i = 0; i < size; i++)
   {
   	for(int j = 0; j < 3; j++)
   	{
   	       b[i*3+j] = a[i][j];
   	}
   }

   cout << "Convert to one dimensional: " << endl;


   for(int i = 0; i < size * 3; i++)
   {
   		cout << b[i] << " " ;
   }

   cout << endl;

   cout << endl;



}