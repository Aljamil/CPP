
#include <iostream>
using namespace std;



#include "List.cpp"


void instruct()
{
	cout << "\n\nEnter the following." << endl;
	cout << "1 to insert to the front of list." << endl;
	cout << "2 to insert to the back of list." << endl;
	cout << "3 to delete to the front of list." << endl;
	cout << "4 to delete to the back of list." << endl;
	cout << "5 to end list process." << endl;
}

int main()
{

	int choice, value;

	List Object;

	instruct();

	
	

	do{
		cout << "\nEnter the choice: ";

		cin >> choice;

	switch(choice)
	{
		case 1: cout << "Enter the value: ";
				cin >> value;
				Object.insertFront(value);
				Object.print();
				break;
		case 2:  cout << "Enter the value: ";
				cin >> value;
				Object.insertBack(value);
				Object.print();
				break;
		case 3: if(Object.removeFront( value ))
				cout << value << " removed from list." << endl;
				Object.print();
				break;
		case 4: if(Object.removeBack( value ))
				cout << value << " removed from list." << endl;
				Object.print();
				break;
	}

    } while(choice < 5);


    cout << "End process!" << endl;
	
}