#include "Publication.h"
#include "Sales.h"
#include "Book.h"
#include <iostream>

using namespace std;

//Define the function getData to get the publication, sales, and page count
void Book::getData()
{
    Publication::getData();
    Sales::getData();
    cout << "\nEnter page count of the book: ";
    cin >> pageCount;
    return;
}

//Define the function putData to display the publication, sales, and page count
void Book::putData()
{
    Publication::putData();
    Sales::putData();
    cout << "\nPage count of the book: " << pageCount;
    return;
}