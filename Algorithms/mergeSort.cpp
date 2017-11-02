#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

void mergeSort(int * , int, int, int);
void sort(int * , int, int);


int size;
int main()
{
	

	cout << "Enter the size you want: ";

	cin >> size;

	int arr[size];

	

	srand(time(0));

	for(int i = 0; i < size; i++)
	{
		arr[i] = 1 + rand() % size;
	}


	cout << "The elements of array are: ";

	for(int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;


	cout << "Sorted arrays are: ";

	sort(arr, 0, size - 1);

	for(int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
}


void sort(int *data, int low, int high)
{

	int middle;
	
	if(low < high)
	{
		int middle = (low + high) / 2;
	//	int middle2 = middle1 + 1;


		sort(data, low, middle);
		sort(data, middle + 1, high);

		mergeSort(data, low, middle, high);
	}


	return;
}

void mergeSort(int *data, int left, int mid1, int right)
{
	int leftIndex = left;
	int rightIndex = mid1 + 1;
	int combinedIndex = left;
	int combined[size];

	while(leftIndex <= mid1 && rightIndex <= right)
	{
		if(data[leftIndex] < data[rightIndex])
		{
			combined[combinedIndex] = data[leftIndex];
			combinedIndex++;
			leftIndex++;
		}
		else{
			combined[combinedIndex] = data[rightIndex];
			combinedIndex++;
			rightIndex++;
		}
	}

	while(leftIndex <= mid1)
	{
		combined[combinedIndex] = data[leftIndex];
		combinedIndex++;
		leftIndex++;
	}

	while(rightIndex <= right)
	{
		combined[combinedIndex] = data[rightIndex];
		combinedIndex++;
		rightIndex++;
	}




	for(int i = left; i < combinedIndex; i++)
		data[i] = combined[i];


}