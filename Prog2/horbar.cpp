// Problem ID: 1031012
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include <iostream>
using namespace std;

string bar(string c, unsigned int n)
{
  if ( n == 0)
    return "";
  else
    return bar(c,n-1) + c;
}

int main()
{
	int a;
	string b;
	cin >> a;
	for(int i = 0; i < a; i++)
	{
		cin >> b;
		cout << b << endl;
	}

	return 0;
}

/*
int main()
{
  cout << bar("**", 3) << endl;
  cout << bar("cc", 5) << endl;
  cout << bar("alpha",2) << endl;
  return 0;
}
*/

