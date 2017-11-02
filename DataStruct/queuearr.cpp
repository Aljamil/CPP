#include <iostream>
using namespace std;

#define SIZE 3
char queue[SIZE];
int front = -1, rear = -1;

void enqueue(char);
void dequeue();
void display();


int main()
{
	int choice;
	char val;

	cout << "Enter '1' to enqueue\nEnter '2' to dequeue\nEnter '3' to display.\nEnter '4' to exit.\n" << endl; 

    cin >> choice;

	while (choice != 4)
	{
		switch(choice)
		{
			case 1: cout << "Enter the character in stack: ";
			        cin >> val;
			        enqueue(val);
			        break;
			case 2: cout << "This command will pop the element." << endl;
					dequeue();
					break;
			case 3: cout << "This command will display the elements of stack." << endl;
					display();
					break;
			default: cout << "Not following instructions." << endl;
		}

        cout << "Enter '1' to enqueue\nEnter '2' to dequeue\nEnter '3' to display.\nEnter '4' to exit.\n" << endl; 
		cin >> choice;
	}
}

void enqueue(char value)
{
	if(rear == SIZE - 1)
	{
		cout << "The queue is FULL, insertion not possible." << endl;
	}
	else{
		cout << value << " is inserted to queue." << endl;
		rear++;
		queue[rear] = value;
	}
}

void dequeue()
{
	if(front == rear)
	{
		cout << "The queue is empty!" << endl;
	}
	else{
		front++;
		cout << queue[front] << " will be deleted." << endl;
		
	}
}

void display()
{
	if(rear == front)
	{
		cout << "The queue is empty!" << endl;
	}
	else{
		cout << "The elements of queue are ";
		for(int i = front + 1; i <= rear; i++)
		{
			cout << queue[i] << " ";
		}
		cout << endl;
	}
}