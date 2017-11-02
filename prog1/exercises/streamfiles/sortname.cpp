// Problem ID: 131105
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include <iostream>
#include <fstream>
using namespace std;

void sortnames(string line[], int N)
{	
    int End = N - 2;
    for (int k = 0; k <= N - 2; k++)
    {
      for (int i = 0; i <= End; i++)
      {
         if (line[i] > line[i + 1])
         {
           string temp = line[i];
           line[i] = line[i + 1];
           line[i + 1] = temp;
         }
      }
      End = End - 1;
    }
}

int main() 
{
   char filename[256];
   cin >> filename;
   ifstream in(filename);
	
   string line[100];
   int i = 0;
	
   while(getline(in, line[i]))
   {
      i = i + 1;
   }
   sortnames(line, i);
   for (int a = 0; a < i; a++)
   {
     cout << line[a] << endl;
   }
    
    return 1;
}

