
#include <iostream>
using namespace std;

struct Node{
		int data;
		Node *nextPtr;
};

class LinkedList{
     public:

     	LinkedList(){

     		head->data;
     		head->nextPtr = 0;

     	}

     	bool insertNode(Node *a, int pos)
     	{
     		if((pos <= 0) && (pos > length + 1))
     		{
     			cout << "Out of bounds!" << endl;
     		}

     		if(head->nextPtr = 0)
     		{
     			head->nextPtr = a;
     			length++;
     			return true;
     		}

     		int count = 0;

     		Node *x = head;

     		while(x)
     		{
     			if (count == pos)
     			{
     				x->nextPtr = a;
     				length++;
     				return true;
     			}
     			x->nextPtr;
     			count++;
     		}

     		if (count == pos)
     			{
     				x->nextPtr = a;
     				length++;
     				return true;
     			}


     			cout << "Node not added to the List" << endl;
     			return false;
     	}

     	bool removeNode(int pos)
     	{
			if((pos <= 0) && (pos > length + 1))
     		{
     			cout << "Out of bounds!" << endl;
     			return false;
     		}

     		if(head->nextPtr = 0)
     		{
     			cout << "There's nothing left." << endl;
     			return false;
     		}

     		int count = 0;

     		Node *x = head;

     		while(x)
     		{
     			if (count == pos)
     			{
     				delete x;
     				length--;
     				return true;
     			}
     			x->nextPtr;
     			count++;
     		}

     		cout << "Nothing was removed." << endl;
     		return false;
     	}

     	void print()
     	{
     		Node *x = head;


     		cout << "The elements are: ";

     		while(x)
     		{
     			cout << x->data << " ";
     			x->nextPtr;
     		}

     		cout << endl;
     	}

     	~LinkedList()
     	{

     		Node *x = head;

     		while(x)
     		{
   			
     			x->nextPtr;

                    delete x;
     		}

     	}


     private:
     	Node *head;
     	int length;
};

void instruct()
{
	cout << "\n\nEnter the following." << endl;
	cout << "1 to insert to the front of list." << endl;
	cout << "2 to insert to the back of list." << endl;
	cout << "3 to end list process." << endl;
}



int main()
{


	Node *i = new Node;
	i->data = 3;

	LinkedList Object;

	int value, pos, choice;

	  Object.print();


	  cout << "Enter the value: ";
	  cin >> pos;
	  Object.removeNode(pos);
	  Object.print();



    cout << "End process!" << endl;

} 