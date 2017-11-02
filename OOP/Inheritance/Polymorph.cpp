
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

		virtual int expectNum() = 0;

		virtual void print()
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

  	int expectNum()
  	{
  		return age * 100;
  	}

    void print()
  	{
  		SuperEmployee::print();
  		cout << "Age: " << age << endl;
  		cout << expectNum() << endl;
  	}

  private:
  	int age; 
};

int main()
{

	SuperEmployee *me1Ptr = 0;

	SubEmployee me2("George", "Washington", "DC.", 200);

	SubEmployee *me2Ptr = &me2;

	//cout << "SuperEmployee PTR:" << endl;
	//me1Ptr->print();


	cout << "\n\nSubEmployee PTR:" << endl;
	me2Ptr->print();


	SuperEmployee &me1 = me2;
    cout <<"\n\nDerived class Invoked Base Class:" << endl;
    me1.print();


    me1Ptr = &me2;
    cout <<"\n\nDerived class Invoked Base Class (POINTER):" << endl;
    me1Ptr->print();
	
}