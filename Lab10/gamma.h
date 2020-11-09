#include <iostream>

using namespace std;

class gamma {
private:
    int id;
    static int total;
public:
    gamma();

    virtual ~gamma();

    static void showtotal();

    void showid();
};

int gamma::total = 0;

gamma::gamma() {
    id = ++total;
}

void gamma::showtotal() {
    cout << "Total is " << total << endl;
}

void gamma::showid() {
    cout << "ID number is " << id << endl;
}

gamma::~gamma() {
    cout << "Destroying ID number " << id << endl;
}
