#include <iostream>
#include "Scope.h"
using namespace std;

int main()
{
	Scope p;
	Scope *p1 = &p;

	cout << "Use objects w/ pointer " << p1->boo() << " " << p1->foo(1) << endl;
}