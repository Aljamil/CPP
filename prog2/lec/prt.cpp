#include <iostream>
using namespace std;

int main()
{
 int x = 7;
 int *z = &x;

 cout << x << " " << &x << endl;
 cout << z << " " << &z << endl;
 cout << *z << endl;

}