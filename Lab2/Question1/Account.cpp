/*
Hunter Lewis and Quan Do
SEC 07 and 08
Team 8
September 8th 2020
*/

#include <iostream>
using namespace std;
#include "Account.h"
Account::Account() : bal(0.0)
{
}
Account::Account(double b) :
bal(b)
{
}
double Account::deposit(double d){
    bal = bal + d;
}
double Account::withdraw(double w){
    if(w > bal){
            bal = bal - 5;
        }
        else{
            bal = bal - w;
        }
}
double Account::get_balance(){
    return bal;
}
int main()
{
   Account my_account(100);     // Set up my account with $100
   my_account.deposit(50);
   my_account.withdraw(175);   // Penalty of $5 will apply
   my_account.withdraw(25);

   cout << "Account balance: " << my_account.get_balance() << "\n";

   my_account.withdraw(my_account.get_balance());  // withdraw all
   cout << "Account balance: " << my_account.get_balance() << "\n";

   //end of the sample main
}
