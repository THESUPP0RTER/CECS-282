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
    int biArray[bin.length()] = { };
    int decimal = 0;
    for(int i; i < bin.length(); i++){
        biArray[i] = x % 10;
        decimal += biArray[i] * pow(2,i);
        x /= 10;
    }
    cout << decimal;
    return 0;
}

int main(){
    bin2Dec("10001");
    return 0;
}
