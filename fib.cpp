#include <iostream>
using namespace std;

int fibonacci(int n);
int none(int, int);

int main()
{
	int num, n;

	cout << "Enter two number: ";
	cin >> num >> n;

	//cout << "The fibonacci value is " << fibonacci(num) << endl;

	cout << none(num, n) << endl;
}

/*
int fibonacci(int n)
{
	cout << "Facset" << endl;
	if(n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
} */

int none(int m, int n)
{
	cout << "Facset" << endl;
	if(m == 0)
	{
		n = n + 1;
	}

	
    return m + none(m -1, n);
}