#include <iostream>
using namespace std;
class alpha
{
private:
	int data;
public:

	//this is for alpha a2; this object creation if we remove it will raise an error.It is default constructor.
	alpha() { ; }

	//this if for alpha a1(37); and it is a parameterized constructor with one parameter as integer type.
	alpha(int d) {

		//assigning value to object.
		data = d;
	}

	//copy constructor. And this is for alpha a3(a1); and alpha a4=a1; these two lines.
	alpha(const alpha& a) {
		data = a.data;
	}

	//display function to display value of objects.
	void display() {

		//displaying data value of particular object invoked from main()
		cout << data;
	}
};