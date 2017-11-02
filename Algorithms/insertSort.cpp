#include <iostream>
#include <cstdlib>
using namespace std;

void insertSort(int [], int );

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

	insertSort(nums, s);

	cout << "Sorted Arrays: "; 

	for(int i = 0; i < s; i++)
	{
		cout << nums[i] << " ";
	}

	cout << endl;
	
	return 0;
}

void insertSort(int data[], int size)
{
	for(int i = 1; i < size; i++)
	{
		int insert = data[i];
		int moveitem = i;

		while((moveitem > 0) && (data[moveitem- 1] > insert))
		{
			data[moveitem] = data[moveitem - 1];
			moveitem--;
		}

		data[moveitem] = insert;
	}
}