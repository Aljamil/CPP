//

#include <fstream>
#include <iostream>
using namespace std;

int main()
{
  ifstream in;
  in.open("data.txt");

  int c;
  c = in.get();
  while (!in.eof())
  {
  c = in.get();
  cout << char(c) << endl;
  c = in.get();
  }
  in.close();
  return 1;
}
