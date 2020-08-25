/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int main()
{
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
