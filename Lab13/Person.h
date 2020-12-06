#ifndef Person_H
#define Person_H

#include <iostream>
using namespace std;

class Person{
    private:
        string lastName;
        string firstName;
        long phoneNumber;
    public:
        Person() : lastName("blank"), firstName("blank"), phoneNumber(0L){
        }
        Person(String ln, string fn, long pN) : 
        lastName(ln), firstName(fn), phoneNumber(pN){
        }
        friend bool operator<(const Person&, const Person&);
        friend bool operator==(const Person&, const Person&);

        void display() const{
        cout<<endl<<lastName<< ",\t"<<firstName<<"\t\tPhone: "<< phoneNumber;
        }
};
#endif