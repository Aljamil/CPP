//

#include <iostream>
using namespace std;

int main()
{
 float n = 0;
 float sum = 0;
 float x;
 cin >> x;
 for (   ; x != 9999;  )
 {
   n++;
   sum+=x;
   cin >> x;
  }
if ( n > 0)
  cout << sum/n << endl;
else
 cout << "no integer." << endl;
 return 1;
}
