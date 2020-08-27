//Hunter Lewis and Quan Do
//CECS 282 SEC 07
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;
int bin2Dec(string bin)
{
    stringstream holder(bin);
    int x = 0;
    holder >> x;
    int power = 1;
    int decimal = 0;
    while(x > 0){
        int last = x % 10;
        x /= 10;
        decimal += last * power;
        power = power * 2;
    }
    cout << decimal;
    return 0;
}

int main(){
    bin2Dec("10001");
    return 0;
}
