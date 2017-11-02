// Problem ID: 131061
// Name: Al Jamil L. Arazas (ID: 2012-1-0712)
// Honor Code:I have not given nor received any unauthorized help in this work.

#include <iostream>
using namespace std;

double getMin(double a, double b)
{
    if (b > a)
    return a;
    else return b;

}

int main()
{
    double x = 10.5,  y = 3.1; // declare a value in the variables
    cout << getMin( x, y) << endl; // get a minimum
    cout << getMin(y, x) << endl; // get a minimum

    return 0;
}

