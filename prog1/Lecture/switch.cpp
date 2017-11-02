// switch case

# include <iostream>
using namespace std;

int main()
{
  char choice;
  cout << "Menu| (a)dd (s)ubtract e(x)it : ";
  cin >> choice;
  switch (choice) {
  case 'a' : case 'A': cout << " you have chosen add\n ";
             break;
  case 's' : case 'S': cout << "you have chosen subtract\n ";
             break;
  case 'x' : case 'X': cout << "you have chosen exit\n ";
             break;
  default :  cout << "unknown choice" << choice << endl;
             break;
  }
  return 1;
}
