//areaofcircle.cpp
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const double PI = acos(-1.0);
	double r;
	cout << "Enter the radius: " ;
	cin >> r ;
	cout << "Area = " << PI * r * r << endl;
	cout << "Area = " << 3.14159 * r * r << endl;
	return 1;
	
}
