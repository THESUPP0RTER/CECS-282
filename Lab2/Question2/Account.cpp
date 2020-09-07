/*
Hunter Lewis and Quan Do
SEC 07 and 08
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
double Account::add_interest(double i){
    bal = (i / 100) * bal + bal;
}
int main()
{
   int months = 1;
   double rate = 0;
   double init = 0;
   cout<<"Enter initial banck balance ";
   cin>> init;
   Account new_account(init);
   double firstbal = new_account.get_balance();
   cout<<"Enter annual interest rate ";
   cin>> rate;
   double final_amount = new_account.get_balance();
   final_amount = final_amount * 2;
       while (new_account.get_balance() < final_amount)
           {
              new_account.add_interest(rate / 12);
              months++;
           }
       cout << "It took " << months << " months for " << firstbal << " to double at " << rate << "% annual interest." << endl;
       cout << "Account balance: " << new_account.get_balance() << endl;
   return 0;
}
