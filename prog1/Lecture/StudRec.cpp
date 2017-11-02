#include <iostream>
#include <string>
using namespace std;

struct StudRec
{
	int id;
	string lastName;
	string firstName;
	string course;
};

void readData(StudRec &x)
{
	cin >> x.id;

	string temp;
	getline(cin, temp);

	getline(cin, x.firstName);
	getline(cin, x.lastName);
	getline(cin, x.course);
} 

void printData(StudRec x)
{
	cout <<"ID     : " << x.id << endl;
	cout <<"Name   : " << x.firstName << " " << x.lastName << endl;
	cout <<"Course : " << x.course << endl;
} 

int main()
{
	StudRec x;
	
	readData(x);
	printData(x);

return 1;
}
