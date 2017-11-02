
#include <iostream>
using namespace std;

int main()
{
  int alpha = 7;
  int *ptr = &alpha;

  ptr = new int (101);

  cout << alpha << " " << &alpha << endl;
  cout << *ptr  << " " << &ptr << endl;

  return 0;

 } 