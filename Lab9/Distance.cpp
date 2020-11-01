#include<iostream>
#include "Distance.h"
using namespace std;
Distance Distance::operator++(int) {
	return Distance(feet + 1, inches);
}
Distance Distance::operator+(int n) {
	return Distance(feet + n, inches);
}
bool Distance::operator>(Distance& o) {
	if ((feet > o.feet) && (inches > o.inches)) {
		return true;
	}
	else {
		return false;
	}
}
Distance operator-(Distance d1, Distance d2) const{
	int totalFeet = d1.feet - d2.feet;
	int totalInches = d1.inches - d2.inches;
	if (totalFeet < 0 && totalInches < 0) {
		totalFeet = -totalFeet;
		totalInches = -totalInches;
	}
	while (totalFeet > 0 && totalInches < 0) {
		in = 12 + in;
		ft = ft - 1;
	}
	return Distance(d1,d2)
}
ostream& operator <<(ostream& out, const Distance& d) {
	out << d.feet << "' " << d.inches << "\"";
	return out;
}

istream& operator >>(istream& in, const Distance& d) {
	int inputFeet;
	float inputInches;
	cout << "Enter feet: ";
	in >> inputFeet;
	cout << "Enter inches: ";
	in >> inputInches;
	d.feet = inputFeet;
	d.inches = inputInches;
	return in;
}

int main()
{
	Distance dist1, dist3, dist4; //define distances
	cin >> dist1;
	Distance dist2(11, 6.25); //define, initialize dist2
	dist3 = dist1 + dist2; //single '+' operator
	dist4 = dist1 - dist2; //friend '-' operators
	//display all lengths
	cout << "dist1 = ";
	cout << dist1 << endl;
	cout << "dist2 = ";
	cout << dist2 << endl;
	cout << "dist3 = ";
	cout << dist3 << endl;
	cout << "dist4 = ";
	cout << dist4 << endl;
	dist2 = dist1++; //Increase feet by one
	dist3 = dist2 + 10;//10 mean feet
	cout << "dist2 = ";
	cout << dist2 << endl;
	cout << "dist3 = ";
	cout << dist3 << endl;
	if (dist4 > dist1)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}