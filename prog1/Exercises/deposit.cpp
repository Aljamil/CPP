// Problem ID: 131074
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

#include <iostream>
#include <string>
using namespace std;

struct BankAccount
{
   string lastName;
   string firstName;
   string ID;
   double balance;
};


void print(BankAccount a)
{
    cout << "ID : " << a.ID << endl;
    cout << "Name : " << a.lastName << ", "  <<  a.firstName << endl;
    cout << "Balance : " << a.balance << endl;
}

void deposit(BankAccount &a, double x)
{
    if(x<500)
    {
    cout << "invalid deposit " << endl;
    a.balance+= 0; 
    }
    else if (x>=500)
    {
    a.balance+= x;
    }
}


int main()
{
   BankAccount a;
   a.ID = "231-2912-0";
   a.lastName = "Dela Cruz";
   a.firstName = "Johnny";
   a.balance = 15000.78;
   print(a);
   cout << endl;
  
   deposit(a, 600);
   print(a);
   cout << endl;
  
   deposit(a, 300);
   cout << endl;

   print(a);
}

