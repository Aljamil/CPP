#include "Interface.h"
#include <iostream>
using namespace std;

int main()
{
	Interface i(5);

	cout << "Interface contains " << i.getValue()
	 << " before setValue." << endl;

	 i.setValue(10);

	 cout << "Interface contains " << i.getValue()
	 	<< " after setValue." << endl;
}