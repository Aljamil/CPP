#include <iostream>
#include <string>
using namespace std;


void combinedString(string &str1, string &str2)
{
	for(int i = 0; i < str1.length() && i < str2.length(); i++)
		{
			cout << str1[i] <<  str2[i];
		}
}

int main()
{
	string s1, s2;

	getline(cin, s1);
	getline(cin, s2);

	combinedString(s1, s2);
}