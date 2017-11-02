#include <iostream>
using namespace std;

int main()
{
	int num, flag, lob, rev = 0;

	cin >> num;
	flag = num;

	while(num != 0)
	{
		lob = num % 10;
		rev = (rev * 10) + lob;
		num = num/10;
	}


	if (flag == rev)
         cout << " The number is a palindrome" << endl;
     else
         cout << " The number is not a palindrome" << endl;

}