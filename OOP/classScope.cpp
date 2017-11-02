#include <iostream>
using namespace std;

class Parent
{
  public:

  	int boo()
  	{
  		return 1;
  	}

  	int foo(int val)
  	{
  		x = val;
  		return boo() + x;
  	}

  private:
  	int x;
};


int main()
{
	Parent p;
	Parent *p1 = &p;
	Parent &p2 = p;

	cout << "Use objects " << p.boo() << " " << p.foo(1) << endl;
	cout << "Use objects w/ reference " << p2.boo() << " " << p2.foo(1) << endl;
	cout << "Use objects w/ pointer " << p1->boo() << " " << p1->foo(1) << endl;
}
