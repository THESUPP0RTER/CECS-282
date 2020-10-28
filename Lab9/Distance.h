#include <iostream>
using namespace std;
class Distance //English Distance class
{
private:
	int feet;
	float inches;
public: //constructor (no args)
	Distance() {};
	Distance(int ft, float in) {};
	Distance operator+(const Distance & d2) const;
	//overloaded operator - using friend function
	friend Distance operator-(const Distance & d2) const;
	//overloading >> and << operator using friend function
	friend istream& operator >>(istream& in, Distance& d);
	friend ostream& operator <<(ostream& out, Distance& d);
};