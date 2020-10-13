#ifndef PUBLICATION_BOOK_H

#define PUBLICATION_BOOK_H

#include "Publication.h"

#include "Sales.h"
#include <iostream>
using namespace std;
//In this class you need to declare two functions getData and putData and a data member for page count
class Book: public Publication, public Sales
{
    public:
        void getData();
        void putData();

    protected:
        int pageCount;
};
 
#endif