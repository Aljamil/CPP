
#include <iostream>
using namespace std;

class SuperEmployee
{
	public:

		SuperEmployee()
		{
			firstName = lastName = middleName = " ";
		}

		SuperEmployee(string fn, string ln, string mn)
		{
			firstName = fn;
			lastName = ln;
			middleName = mn;
		}

		void setFirstName(string fn)
		{
			firstName = fn;
		}

		void setLastName(string ln)
		{
			lastName = ln;
		}

		void setMiddleName(string mn)
		{
			middleName = mn;
		}

		string getFirstName()
		{
			return firstName;
		}

		string getLastName()
		{
			return lastName;
		}

		string getMiddleName()
		{
			return middleName;
		}

		void print()
		{
			cout << "\n\nFirstName: " << firstName << "\nLastName: " << lastName
				<< "\nMiddleName: " << middleName << endl;
		}

   private:
   	 string firstName, lastName, middleName;
};

class SubEmployee : public SuperEmployee
{
  public:
  	SubEmployee()
  	: SuperEmployee()
  	{

  		age = 0;
  	}

  	SubEmployee(string fn, string ln, string mn, int num)
  	: SuperEmployee(fn, ln, mn)
  	{

  		age = num;
  	}

  	void setAge(int num)
  	{
  		age = num;
  	}

  	int getAge()
  	{
  		return age;
  	}

  	void print()
  	{
  		SuperEmployee::print();
  		cout << "Age: " << age << endl;
  	}

  private:
  	int age; 
};

int main()
{
	string first, last, middle;
	int age;

	SubEmployee me;

	SubEmployee *ako = &me;

	cout << "Enter your first name: ";
	getline(cin, first);
	ako->setFirstName(first);

	cout << "Enter your last name: ";
	getline(cin, last);
	ako->setLastName(last);

	cout << "Enter your middle name: ";
	getline(cin, middle);
	ako->setMiddleName(middle);

	cout << "Enter age: ";
	cin >> age;
	ako->setAge(age);

	ako->getFirstName();
	ako->getLastName();
	ako->getMiddleName();
	ako->getAge();

	ako->print();


	SubEmployee *I = new SubEmployee();
	I->setFirstName(last);
	I->setLastName(first);
	I->setMiddleName(middle);
	I->setAge(100);
	I->print();

	delete I;

	cout << "\n\n" << &me << endl;

}