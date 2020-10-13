//Main.cpp
#include "Sales.h"
#include "Publication.h"
#include "Book.h"
#include "Digital.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    Book b;
    Digital d;
    b.getData();
    b.putData();
    cout << endl;
    d.getData();
    d.putData();
    cout << endl;
    return 0;

}