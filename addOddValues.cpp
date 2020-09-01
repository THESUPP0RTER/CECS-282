//Hunter Lewis
//CECS 282 SEC 07
//Sept 1st 2020
//Question 1
#include <iostream>

using namespace std;
int main()
{
    cout >> "Enter number: "
    int input;
    cin >>  input;
    int odd = 0;
    while(input > 0){
        int last = input % 10; //assigns last digit
        input /= 10; //removes last digit
        if(last % 2 == 1) //detects if last digit is odd
            odd += last;
    }
    cout << odd;
      return 0;
}
