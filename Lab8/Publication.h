#ifndef PUBLICATION_PUBLICATION_H

#define PUBLICATION_PUBLICATION_H

#include <iostream>
using namespace std;
class Publication{

    public:
    //Declare getData and putdata
    void getData();
    void putData();


    //Declare title and price
    protected:
    string title;
    float price;


};

#endif //PUBLICATION_PUBLICATION_H