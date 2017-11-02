// Problem ID: 131033
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

# include <iostream>
using namespace std;

int main()
{
	int x,y,z;
	cin >> x >> y;
	
	if ((x%y)== 0){
		cout << x << " is a multiple of " << y << "." << endl;
	}
	else if ((y%x) == 0){
		cout << y << " is a multiple of " << x << "." << endl;
	}
	else { 
		cout << x << " and " << y << " are not multiple of each other " << "." << endl;
	}
	
	return 1;
}

