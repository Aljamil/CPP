// Problem ID: 131104
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    
   char filename[256];
   cin >> filename;
   ifstream in(filename);
    
   char name[256];
   int x;
   double sum;
   double average;
       
   while(in >> name)
   {
     average = 0;
     sum = 0;      
     for(int i =0; i < 5; i++)
     {
     in >> x;
     sum += x;
     average = sum / 5;
     }
     cout << name << " " << average << endl;
       
   }
    
   return 1;
}

