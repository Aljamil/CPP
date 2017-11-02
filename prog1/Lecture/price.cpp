// price.cpp

# include <iostream>
using namespace std;
int main()
{
 float price;
 int n;
 
 cout << "Enter price of a can of corned beef: ";
 cin >> price;
 
 cout << " Enter the number of cans to buy: ";
 cin >> n;

 cout << "The total price is PHP" << n*price << endl; 

return 1;
}
