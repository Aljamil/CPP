// Problem ID: 131063
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor: I have not given nor received any unauthorized help in this work. 

#include <iostream>
using namespace std;

void doSwap (int &a, int &b, int &c)
{ 
    int old_a = a;
        a = b;
        b = c;
        c = old_a;
}

void rotateLeft (int &a, int &b, int &c)
{
     doSwap(a, b, c);
}
/*
int main()
{
   int x = 7, y = 13, z = 4;
   cout << x << " " << y << " " << z << endl;
   rotateLeft(x, y, z);
   cout << x << " " << y << " " << z << endl;
  
   return 0;
}
*/

