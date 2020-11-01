#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class time24{
private:
	int hours; //0 to 23
	int minutes; //0 to 59
	int seconds; //0 to 59
public: //no-arg constructor
	time24() : hours(0), minutes(0), seconds(0){ }
	time24(int h, int m, int s) : //3-arg constructor
		hours(h), minutes(m), seconds(s)
	{ }
	void display() const //format: 23:15:01
	{
		if (hours < 10) cout << '0';
		cout << hours << ':';
		if (minutes < 10) cout << '0';
		cout << minutes << ':';
		if (seconds < 10) cout << '0';
		cout << seconds;
	}

	int get_hours() const {
		return hours;
	};
	int get_minutes() const {
		return minutes;
	};
	int get_seconds() const {
		return seconds;
	};

};

class time12 {
private:
	bool pm; //true = pm, false = am
	int hrs; //1 to 12
	int mins; //0 to 59
public: //no-arg constructor
	time12() : pm(true), hrs(0), mins(0)
	{ }
	//3-arg constructor
	time12(bool ap, int h, int m) : pm(ap), hrs(h), mins(m)
	{ }
	time12(time24 t24); //one arg constructor
	void display() const //format: 11:59 p.m.
	{
		cout << hrs << ':';
		if (mins < 10)
			cout << '0'; //extra zero for "01"
		cout << mins << ' ';
		string am_pm = pm ? "p.m." : "a.m.";
		cout << am_pm;
	}

	operator time24() {
		int hour;
		if (pm) {
			hour = hrs + 12;
			if (hour == 24) {
				hour = 12;
			}
			else {
				hour = hrs;
				if (hour == 12) {
					hour = 0;
				}
			}
		}
		int minute = mins;
		return time24(hour, minute, 0);
	}

};

time12::time12(time24 t24) {
	int hrs24 = t24.get_hours();
	pm = (hrs24 < 12) ? false : true;
	mins = t24.get_seconds() < 30 ? t24.get_minutes() : t24.get_minutes() + 1;    // round seconds
	if (mins == 60)                   // carry mins
	{
		mins = 0;
		++hrs24;
		if (hrs24 == 12 || hrs24 == 24) pm = (pm == true) ? false : true; // carry hrs? yes toggle pm/am
	}
	hrs = (hrs24 > 13) ? hrs24 - 12 : hrs24;
	if (hrs == 0) { hrs = 12; pm = false; }
}