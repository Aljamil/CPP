// Problem ID: 131102
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   char filename[256];
   cin >> filename;
   ifstream in(filename);
	
   int vowel = 0;
   char c;
   c = in.get();
   
   while (!in.eof())
   {
   	  c = in.get();
   	  if (c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u')
   	  vowel++;
   }
   cout << vowel << endl; 
    
   return 1;
}




      
   	  
