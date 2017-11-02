// Problem ID : 
// Name       : Aaron Matthew Napay 
// Honor Code : I have not given nor received any unauthorized help in this work.

#include <iostream>
using namespace std;

int main()
{
  	float a,b,c,d;
	cin >> a;
	cin >> b;
	cin >> c;
	d = b*b-4*a*c;
	cout << ((d>0) ? "quadratic equation has two roots" : "quadratic equation has no root.") << endl;
	return 1;
}
