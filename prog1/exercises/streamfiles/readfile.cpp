// Problem ID: 131101
// Name : Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   char filename[256];
   cin >> filename;
   ifstream in(filename);
	
   char input[256];
   int n = 0;
   while (in.getline(input, 255))
   {
   n++;
   cout << n << ": ";
   cout << input << endl;
   }
   
   return 1;
}
