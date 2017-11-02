// Problem ID: 1031055 
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code: I have not given nor received any unauthorized help in this work.


template <typename E>

E gcd(E a, E b)
{
  if (a < b)
   swap(a, b);

  while (b > 1e-10 || b < -1e-10)
  {
    E t = a - b;
    while (t >= b)
    t = t - b;
    a = b;
    b = t;
  }
  return a;
}
/*
int main()
{
  double x = 2.4, y = 1.2;

  cout << gcd(x, y) << endl;


  cout << gcd(12345, 54321) << endl;

  return 0;
}
*/
