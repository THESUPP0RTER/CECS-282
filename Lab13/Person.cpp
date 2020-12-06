#include "Person.h"
#include <iostream>
#include <set>
#include <string>
using namespace std;
bool operator<(const person& p1, const person& p2)
{
    if (p1.lastName == p2.lastName)
        return (p1.firstName < p2.firstName) ? true : false;
    return (p1.lastName < p2.lastName) ? true : false;
}
//--------------------------------------------------------------
// overloaded == for person class
bool operator==(const person& p1, const person& p2)
{
    return (p1.lastName == p2.lastName &&
        p1.firstName == p2.firstName) ? true : false;
}
//--------------------------------------------------------------
// function object to compare persons using pointers
class comparePersons
{
public:
    bool operator() (const person* ptrP1, const person* ptrP2) const
    {
        return *ptrP1 < *ptrP2;
    }
};
//--------------------------------------------------------------
//function object to display a person, using a pointer
class displayPerson
{
public:
    void operator() (const person* ptrP) const
    {
        ptrP->display();
    }
};

int main()
{                       
    //make persons
    Person* ptrP1 = new person("KuangThu", "Bruce", 4157300);
    Person* ptrP2 = new person("Deauville", "William", 8435150);
    Person* ptrP3 = new person("Wellington", "John", 9207404);
    Person* ptrP4 = new person("Bartoski", "Peter", 6946473);
    Person* ptrP5 = new person("Fredericks", "Roger", 7049982);
    Person* ptrP6 = new person("McDonald", "Stacey", 7764987);
    Person* ptrP7 = new person("KuangThu", "Bruce", 5551230);
    Person* ptrP8 = new person("Deauville", "William", 8435150);

    //Creating multiset
    multiset<Person*, comparePersons> multi;
    multi.insert(ptrP1);
    multi.insert(ptrP2);
    multi.insert(ptrP3);
    multi.insert(ptrP4);
    multi.insert(ptrP5);
    multi.insert(ptrP6);
    multi.insert(ptrP7);
    multi.insert(ptrP8);

    for_each(multi.begin(),multi.end(), displayPerson());//display person
    cout << endl;


    return 0;
} // end main()