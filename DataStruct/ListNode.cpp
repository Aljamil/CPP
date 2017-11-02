
class ListNode
{
   friend class List;

public:
	ListNode() : data(info), nextPtr(0)
	{

	}

	int getData()
	{
		return data;
	} 

private:
	int data;
	ListNode *nextPtr;

};




