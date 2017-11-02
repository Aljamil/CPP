// Problem ID: 1031001
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.

# include <iostream>
using namespace std;

int main()
{
  unsigned int n;
  int x, y;
  int sum, product;
  
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> x >> y;
    sum = x + y;
    product = x * y;
    cout << sum << " " << product << endl;
  }

  

  return 1;
}