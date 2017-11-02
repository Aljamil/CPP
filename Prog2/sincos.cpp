// Problem ID: 1031003
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

# include <iostream>
# include <cmath>
using namespace std;

int main()
{
  int n;
  double m;

  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> m;
    m = m * (3.14159265/180); 
    cout << cos(m) << " " << sin(m) << endl;
  }
  
   return 1;
}