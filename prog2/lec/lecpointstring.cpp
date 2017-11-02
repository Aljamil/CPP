#include <iostream>
using namespace std;

int main()
{
	char a[] = "hello Computer #hep hep";
	char *s = a;
	
	cout << a << " " << s << endl;
	cout << &a << " " << &s << endl;
	cout << *a << " " << *s << endl;
	cout << *(a + 1) << " " << *(s + 1) << endl;
	cout << (a + 1) << " " << (s + 1) << endl;
	cout << &a + 1 << " " << &s + 1 << endl;
	
	return 0;
}
