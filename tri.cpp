#include <iostream>
using namespace std;

int main()
{
	int n;
	char temp = 'A';

	cout << "Enter a number: ";
	cin >> n;

	for(int i = 1; i <= n; ++i){
		//cout << " " << endl;
		for(int j = 1; j <= n-i; j++)
		 cout << " ";
	   for(int k = 1; k <= i; k++)
	  	cout << "* ";

	  
	  cout << endl;
   }

    //cout << endl;

   for(int i = 0; i < n; i++){
   	cout << endl;
   	for(int j = n; i < j; j--){
   		cout << ' ';
   	}
   	for(int k = 0; k < i; k++)
   	{
   		cout << "* ";
   	}
   	/*
   	for(int l = 0; l < i; l++)
   	{
   		cout << "*";
   	} */
   }

   for(int i = n ; i > 0; i--){
   	cout << endl;
   	for(int j = n; j > i; j--)
   	{
   		cout << ' ';
   	}
   	for(int k = 0; k < i; k++)
   	{
   		cout << "* ";
   	}
   	/*
   	for(int l = 0; l < i; l++)
   	{
   		cout << "*";
   	} */
	
}
   cout << endl;

for(int i = 1; i <= n; i++)
{
	cout << endl;
	
	for(int j = 1; j <= n-i; j++)
	
		cout << " "; 
		for(int k = 1; k <= i; k++)
		
			cout << "*";
		
	
	
}   

}