// Problem ID: 131103
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   char filename[256];
   ifstream in;
   cin >> filename;
   in.open(filename);
   
   double x;
   double sum = 0;
   
   while (in >> x)
   {
     sum+=x;
   }
   
   cout << sum << endl;
}
