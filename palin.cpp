#include <iostream>
#include <string>
using namespace std;

/*
void palinNum(int num)
{
    int n, digit, rev = 0;

    n = num;

    do{
      digit = num % 10;
      rev = (rev * 10) + digit;
      num = num / 10;
    } while(num != 0);

    if(n == rev)
    {
      cout << "The number is a palindrome." << endl;
    }

    else{
      cout << "The number is not a palindrome." << endl;
    }
}
*/

void palinStr(string str1)
{
  bool b;

  for(int i = 0; i < str1.length(); i++)
  {
     if(str1[i] != str1[str1.length() - i - 1])
     {
        b = false;
        break;
     }

     else{
      b = true;
     }

     cout << str1[i] << " ";
  }

  cout << endl;

  if(b)
  {
    cout << "The string is palindrome." << endl;
  }

  else{
    cout << "The string is not palindrome. " << endl;
  }
  
   cout << str1.length() << endl;
}


int main()
{

  string palin;
  getline(cin, palin);
  palinStr(palin);

  return 0;
}
