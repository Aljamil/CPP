#include <iostream>
#include <cstdlib>
using namespace std;

int linearSearch(int [], int, int);

int main()
{
	
	int n, s;

	cout << "Enter the size you want: ";
	cin >> s;

	int nums[s];

	srand(0);

	for(int i = 0; i < s; i++)
	{
		nums[i] = 1 + rand() % s;
	}

	cout << "The elements of array is: " << endl;

	for(int j = 0; j < s; j++)
	{
		cout << nums[j] << " ";
	}

	cout << endl;

	cout << "Enter the number you want to search: ";
	cin >> n;

	cout << "The number is located at " << linearSearch(nums, n, s) << "." << endl;

	return 1;
}

int linearSearch(int data[], int number, int size)
{
	for(int i = 0; i < size; i++)
	{
		if(data[i] == number)
			return i;
	}
	return -1;
}


