#include <iostream>
#include <vector> 
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int binarySearch(vector <int>, int);

int main()
{
	int searchKey, size;
	vector <int> arr;

	cout << "Enter the size you want: ";

	cin >> size;

	srand(time(0));

	for(int i = 0; i < size; i++)
	{
		arr.push_back(1 + rand() % size);

		sort(arr.begin(), arr.end() );
	}

	

	cout << "The elements of array are: ";

	for(int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;

	cout << "Enter the key you want to search: ";
	cin >> searchKey;

	cout << "The key is located at " << binarySearch(arr, searchKey)
	   << "." << endl;


	
}

int binarySearch(vector <int> data, int key)
{
	int low = 0;
        int high = data.size() - 1;

	while(low <= high)
        {
           int mid = (low + high)/2;

	   if(data[mid] == key){
	     return mid;
	   }
	   else if (data[mid] > key){
	     high = mid - 1;
	   }
	   else{
	     low = mid + 1;
            }
	}

	return -1;
}


