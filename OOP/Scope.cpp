#include <iostream>
#include "Scope.h"
using namespace std;

int Scope::boo()
{
	return 1;
}

int Scope::foo(int val)
{
	x = val;
	return boo() + x;
}