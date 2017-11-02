// Problem ID: 1031025
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include <iostream>
using namespace std;

void capitalize(char *s)
{
  int i = 0;
  s[0] = toupper(s[0]);
  while (*s >= i)
  {
    if (s[i] == ' ')
	 s[i + 1] = toupper(s[i + 1]);
	 s++; 	
  }
}

int main()
{
  char a[] = "hello Computer #hep hep";

  cout << a << endl;
  capitalize(a);

  cout << a << endl;

  return 0;
}

