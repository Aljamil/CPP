#include <iostream>
#include <cstdlib>
using namespace std;

void bubbleSort(int [], int );

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

	bubbleSort(nums, s);

	cout << "Sorted Arrays: "; 

	for(int i = 0; i < s; i++)
	{
		cout << nums[i] << " ";
	}

	cout << endl;
	
	return 0;
}


void bubbleSort(int data[], int size)
{
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size - 1; j++)
		
			if(data[j] > data[j + 1])
			{
				int temporary = data[j];
				data[j] = data[j + 1];
				data[j + 1] = temporary;
			}
			
		
	}
}