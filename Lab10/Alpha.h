#include <iostream>
using namespace std;
class alpha{
    private:
        int data;
    public:
        //default constructor
        alpha(int data){
            this->data = data;
        }
        //overloading = operator 
        alpha operator = (alpha& obj){
            data = obj.data;
        }
        //copy constructor
        alpha(alpha& obj){
            data = obj.data;
        }
        //displaying data value
        void display()
        {
            cout << data << endl;
        }
};