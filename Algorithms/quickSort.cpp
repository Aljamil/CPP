#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


void quickSort(int[], int, int);
//int partition(int[], int, int);

int main()
{
	int size;

	cout << "Enter the size: ";

	cin >> size;

	int arr[size];

	srand(time(0));

	for(int i = 0; i < size; i++)
	{
		arr[i] = 1 + rand() % size;
	}

	cout << "The array  elements are: ";

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;

    //cout << "Partition: " << partition(arr, 0, size) << endl;

	quickSort(arr, 0, size);

	cout << "The sorted array elements: ";

	for(int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	} 
	cout << endl;

	return 0;
}

void quickSort(int data[], int left, int right)
{
	int i = left; int j = right;
	int mid = data[(left + right)/2];

	int temp;

	while(i <= j)
	{
		while(data[i] < mid)
			i++;
		while(data[j] > mid)
			j--;

		if(i <= j)
		{
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
			i++;
			j--;
		}
	}

	if(left < j)
		quickSort(data, left, j);
	if(i < right)
		quickSort(data, i, right);
	

}

/*
void quickSort(int data[], int left, int right)
{
	int index = partition(data, left, right);
	if(left < index)
		quickSort(data, left, index);
	if(index < right)
		quickSort(data, index, right);
} */