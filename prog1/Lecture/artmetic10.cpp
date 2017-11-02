#include<iostream> 
using namespace std; 
int main() { int num; 
cout << "Please enter a number: ";
 cin >> num; 
 cout << num / 10000 << " "; 
 num %= 10000;
  cout << num / 1000 << " ";
 num %= 1000; 
 cout << num / 100 << " ";
  num %= 100; 
  cout << num / 10 << " ";
   num %= 10; 
   cout << num << endl; 
   return 0;
    }
