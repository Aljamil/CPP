

#include <iostream>
using namespace std;


#include "ListNode.cpp"

class List
{
public:
	List() : firstPtr(0), lastPtr(0)
	{

	}
	~List()
	{
		if(!isEmpty())
		{
			cout << "Destroying Nodes" << endl;

			ListNode *currentPtr = firstPtr;
			ListNode *tempPtr;

			while(currentPtr != 0)
			{
				tempPtr = currentPtr;
				cout << tempPtr-> data << endl;
				currentPtr = currentPtr->nextPtr;
				delete tempPtr;
			}
		}

		cout << "All Nodes destroy." << endl;
	}

	void insertFront(int value)
	{
		ListNode *newPtr = getNewNode(value);

		if (isEmpty())
		{
			firstPtr = lastPtr = newPtr;
		}

		else{
			newPtr->nextPtr = firstPtr;
			firstPtr = newPtr;
		}
	}
	void insertBack(int &value)
	{
		ListNode *newPtr = getNewNode( value );

		if(isEmpty())
		{
			firstPtr = lastPtr = newPtr;
		}
		else{
			newPtr->nextPtr = lastPtr;
			lastPtr = newPtr;
		}
	}
	bool removeFront(int value)
	{
		if(isEmpty())
		{
			return false;
		}
		else{
			ListNode *tempPtr = firstPtr;

			if(firstPtr == lastPtr)
			{
				firstPtr = lastPtr = 0;
			}
			else{
				firstPtr = firstPtr->nextPtr;

				value = tempPtr->data;
				delete tempPtr;
				return true;
			}
		}
	}

	bool removeBack(int value)
	{
		if(isEmpty())
		{
			return false;
		}
		else{
			ListNode *tempPtr = lastPtr;

			if(lastPtr == firstPtr)
			{
				lastPtr = firstPtr = 0;
			}

			else{
				ListNode *currentPtr = firstPtr;

				while(currentPtr->nextPtr != lastPtr)
				{
					currentPtr = currentPtr->nextPtr;
					lastPtr = currentPtr;

					currentPtr->nextPtr = 0;
				}
			}

			value = tempPtr->data;
			delete tempPtr;
			return true;
		}
	}

	bool isEmpty()
	{
		return firstPtr = 0;
	}

	void print()
	{
		if (isEmpty())
		{
			cout << "The list is empty." << endl;
			return;
		}

		ListNode *currentPtr = firstPtr;

		while(currentPtr != 0)
		{
			cout << currentPtr->data << " ";
			currentPtr = currentPtr->nextPtr;
		}
		cout << endl;

	}

   private:
   	ListNode *firstPtr;
   	ListNode *lastPtr;

   	ListNode *getNewNode(int value)
   	{
   		return new ListNode(value);
   	}
};
