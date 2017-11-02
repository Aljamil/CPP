#include <iostream>
using namespace std;

int main()
{
   int y = 5;
   int *yPtr;

   yPtr = &y;


   cout << "The address of &y is " << &y
   		<< "\nThe value of yPtr is " << yPtr << endl;

   cout << "The value of y is " << y
   		<< "\nThe value of *yPtr is " << *yPtr << endl;

   	cout << "Showing that * and & are inverse of each other.\n"
   	     << "&*yPtr = " << &*yPtr << "\n*&yPtr = " << *&yPtr << endl;
	
}