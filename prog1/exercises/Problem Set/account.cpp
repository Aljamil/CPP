// Problem ID: 131194
// Name : Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code:  I have not given nor received any unauthorized help in this work.

#include <iostream>
#include <string>
using namespace std;

struct Account
{
   string id;
   string lastName;
   string firstName;
   double balance;
};

void read(Account &y)
{  
   cin >> y.id;
   string temp;
   getline(cin, temp);
   getline(cin, y.firstName);
   getline(cin, y.lastName);
   cin >> y.balance;
} 

void print(Account y)
{
   cout << "---------" << endl;
   cout <<"ID : " << y.id << endl;
   cout <<"Name : " << y.lastName << "," << " " << y.firstName << endl;
   cout <<"Balance : " << y.balance << endl;
   cout << "---------" << endl; 
	
} 

void deposit(Account &y, double money)
{
   if(money < 500)
   {
    cout<< "invalid deposit" <<endl;
   }
   else 
   {
    y.balance += money;
   }
}

void withdraw(Account &y, double money)
{
    if(money > y.balance)
    {
     cout << "invalid withdrawal" << endl;
    }
    else 
    {
     y.balance -= money;
    }
}

int main()
{
   double money;
   Account y;
   string input;
 
   do
   {
    cin >> input;
   	
    if (input == "DATA")
    {
     read(y);
    }
    if (input == "VIEW")
    {
     print(y);
    }
    if (input == "DEPOSIT")
    {
     cin >> money;
     deposit(y, money);
    }
    if (input == "WITHDRAW")
    {
     cin >> money;
     withdraw (y, money);
    }
   } 
     while(input != "QUIT");

   return 1;
}
