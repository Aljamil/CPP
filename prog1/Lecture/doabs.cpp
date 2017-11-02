//doabs.cpp
#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	int x;
	double y;
	cout << "Enter an Integer: ";
	cin >> x;
	cout << "Enter a floating point number: ";
	cin >> y;
	cout << "| " << x << " | is " << abs(x) << endl;
	cout << "| " << y << " | is " << fabs(y) << endl;
	return 1;
}
