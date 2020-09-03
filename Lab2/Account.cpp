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
   Account my_account(100);     // Set up my account with $100
   my_account.deposit(50);
   my_account.withdraw(175);   // Penalty of $5 will apply
   my_account.withdraw(25);

   cout << "Account balance: " << my_account.get_balance() << "\n";

   my_account.withdraw(my_account.get_balance());  // withdraw all
   cout << "Account balance: " << my_account.get_balance() << "\n";

   //end of the sample main
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
