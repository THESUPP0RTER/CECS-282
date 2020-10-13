#include "Publication.h"
#include "Sales.h"
#include "Digital.h"
#include <iostream>
using namespace std;
//Define the functions getData to input publication, storage and three months of sales
void Digital::getData()
{
    Publication::getData();
    Sales::getData();
    cout << "\nEnter storage in MegaBytes(float value) of the book: ";
    cin >> byte;
    return;
}

//Define the function putData to display the publication, storage and three months of sales
void Digital::putData()
{
    Publication::putData();
    Sales::putData();
    cout << "\nStorage in MegaBytes(float value) of the book: " << byte;
    return;
}