#include "Person.h"
#include <iostream>
#include <set>
#include <algorithm>
#include <string>
#include <iterator>

using namespace std;
bool operator<(const Person& p1, const Person& p2){
	if(p1.lastName == p2.lastName){
		return (p1.firstName < p2.firstName) ? true : false;
	}
	else{
		return (p1.lastName < p2.lastName) ? true : false;
	}
}
bool operator==(const Person& p1, const Person& p2){
	return (p1.lastName == p2.lastName && p1.firstName == p2.firstName ) ? true : false;
}
 
class comparePersons{
	public:
		bool operator() (const Person* ptrP1, const Person* ptrP2) const{ 
		return *ptrP1 < *ptrP2; 
		}
};
class displayPerson{
 	public:
 		void operator() (const Person* ptrP) const{
		 ptrP->display();
		}
 };
 
int main(){
	Person* ptrP1 = new Person("KuangThu", "Bruce", 4157300);
    Person* ptrP2 = new Person("Deauville", "William", 8435150);
    Person* ptrP3 = new Person("Wellington", "John", 9207404);
    Person* ptrP4 = new Person("Bartoski", "Peter", 6946473);
    Person* ptrP5 = new Person("Fredericks", "Roger", 7049982);
    Person* ptrP6 = new Person("McDonald", "Stacey", 7764987);
    Person* ptrP7 = new Person("KuangThu", "Bruce", 5551230);
    Person* ptrP8 = new Person("Deauville", "William", 8435150);
    
    multiset<Person*, comparePersons> persSet;
    multiset<Person*, comparePersons>::iterator iter;
    
    persSet.insert(ptrP1);
    persSet.insert(ptrP2);
    persSet.insert(ptrP3);
    persSet.insert(ptrP4);
    persSet.insert(ptrP5);
    persSet.insert(ptrP6);
    persSet.insert(ptrP7);
    persSet.insert(ptrP8);
    
	cout<<"\nNumber of entries = " << persSet.size();
	for_each(persSet.begin(),persSet.end(), displayPerson());//display person
	cout << endl;
	
	string searchLastName, searchFirstName;
	cout << "\n\nEnter last name of person to search for: ";
	cin >> searchLastName;
	cout << "Enter first name: ";
	cin >> searchFirstName;
	
	Person searchPerson(searchLastName, searchFirstName, 0);
	Person* sPerson = &searchPerson;
	int cntPersons = persSet.count(sPerson); // get count of such persons
	cout << "Number of persons with this name are " << cntPersons;
	
	iter = persSet.lower_bound(sPerson);
	while (iter != persSet.upper_bound(sPerson)) {
		(*iter++)->display();
	}
	cout << endl;
	return 0;
}
