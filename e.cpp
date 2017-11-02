#include <iostream>
using namespace std;

int main()
{
	int a[] = {-1, 2, 3, -5, 4};

	int x;

	for(int i = 0; i < 5; i++)
	{
		
		if(a[i] < 0){
		x += a[i] - i;
		} 

		//cout << a[i] << " ";
	}

	cout << x << endl;


	int i = 1;
	while(i <= 5){
		cout << i << endl;
		i++;
	}
	
}