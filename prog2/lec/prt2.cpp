#include <iostream>
using namespace std;

int main()
{
  int a[] = {7, 8, 9, -2, 5};
  int *ptr = &a[0];

  cout << a[0] << " " << &a[0] << endl;
  cout << ptr << " " << &ptr << " " << *ptr << endl;
  cout << *(ptr + 1) << " " << *(ptr + 2) << endl;
  cout << (ptr + 1) << " " << (ptr + 2) << endl;

}