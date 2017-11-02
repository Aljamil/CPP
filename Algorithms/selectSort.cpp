#include <iostream>
#include <cstdlib>
using namespace std;

void selectSort(int [], int );
void swap(int [], int, int);

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

	selectSort(nums, s);

	cout << "Sorted Arrays: "; 

	for(int i = 0; i < s; i++)
	{
		cout << nums[i] << " ";
	}

	cout << endl;
	
	return 0;
}


void selectSort(int data[], int size)
{
	int smallest;
	for(int i = 0; i < size - 1; i++)
	{
		smallest = i;

		for(int j = i + 1; j < size; j++)
			if(data[smallest] > data[j])
				smallest = j;
			swap(data, i, smallest);
		
	}
}


void swap(int data[], int first, int second)
{
	int temporary = data[first];
	data[first] = data[second];
	data[second] = temporary;

}