// Problem ID: 131064
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code:I have not given nor received any unauthorized help in this work. 

# include <iostream>
using namespace std;

void Swap(int &m, int &n)
{
    int o = m;
    m = n;
    n = o;
}
void sort(int &a, int &b, int &c, int &d)
{
    if (a > b)
     Swap(a,b);
    if (a > c)
     Swap(a,c);
    if (a > d)
     Swap(a,d);
    if (b > c);
     Swap(b,c);
    if (b > d)
     Swap(b,d);
    if (b < a)
     Swap(b,a);
    if (c < a)
     Swap(c, a);
    if (c < b)
     Swap(c,b);
    if (c > d)
     Swap(c,d);
    if (d < a)
     Swap (d,a);
    if (d < b)
     Swap(d,b);
    if (d < c)
     Swap(d,c);		    
}

/*
int main()
{
   int w = 11, x = 7, y = 13, z = 4;
   cout << w << " " << x << " " << y << " " << z << endl;
   sort(w, x, y, z);
   cout << w << " " << x << " " << y << " " << z << endl;

   return 0;
}
*/

