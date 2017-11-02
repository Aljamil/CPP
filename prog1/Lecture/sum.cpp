//

#include <iostream>
using namespace std;

int main()
{
  double n;
  double sum;

  cin >> n;
  sum = 0;
  for (int i = 0; i < n; i++)
  {
   double x;
   cin >> x;
   sum +=x;
  }
  cout << sum << endl;  
  return 1;
}
