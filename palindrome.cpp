#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a;

	bool b;
	getline(cin, a);

	for(int i = 0; i < a.length(); i++)
	{
		if(a[i] != a[a.length() - i - 1])
		{
			b = false;
			break;
		}
		else{
			b = true;
		}

		cout << a[i] << " ";
	}
    cout << endl;
	
	if(b)
	{
		cout << "Yes" << endl;
	}
	else{
		cout << "No" << endl;
	}
}