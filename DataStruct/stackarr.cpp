#include <iostream>
using namespace std;

#define SIZE 10

char stack[SIZE];
int top = -1;

void push(char);
void pop();
void display();

int main()
{
	int choice;
	char val;

	cout << "Enter '1' to push\nEnter '2' to pop\nEnter '3' to display.\nEnter '4' to exit.\n" << endl; 

    cin >> choice;

	while (choice != 4)
	{
		switch(choice)
		{
			case 1: cout << "Enter the character in stack: ";
			        cin >> val;
			        push(val);
			        break;
			case 2: cout << "This command will pop the element." << endl;
					pop();
					break;
			case 3: cout << "This command will display the elements of stack." << endl;
					display();
					break;
			default: cout << "Not following instructions." << endl;
		}

        cout << "Enter '1' to push\nEnter '2' to pop\nEnter '3' to display.\nEnter '4' to exit.\n" << endl; 
		cin >> choice;
	}
}

void push(char value)
{
    if(top == SIZE - 1)
    {
    	cout << "The stack is full, adding element is impossible." << endl;
    }
    else
    {
    	cout << "This element " << value << " is now add to stack." << endl;
    	top++;
    	stack[top] = value;
    }
}

void pop()
{
	if(top == -1)
	{
		cout << "The stack is empty, deletion is impossible." << endl;
	}
	else{
		cout << stack[top] << " will be deleted." << endl;
        top--;
	}
}

void display()
{
	if(top == -1)
	{
		cout << "The stack is empty." << endl;
	}
	else{
	cout << "The elements of stack are ";
	for(int i = top; i >= 0; i--)
	{
		cout << stack[i] << " ";
	}
	cout << endl;
    }
}

