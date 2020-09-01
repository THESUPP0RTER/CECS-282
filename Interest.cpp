/*
Hunter Lewis and Quan Do
CECS 282 SEC 07
Question 2
September 8th
*/

#include<iostream>
using namespace std;

class Account
{
private:
    double bal;
public:
    Account(){
        this->bal = 0.00;
    }
    Account (double x){
        bal = x;
    }
    deposit(double x){
        bal = bal + x;
    }
    withdraw(double x){
        if(x > bal){
            bal = bal - 5;
        }
        else{
            bal = bal - x;
        }
    }
    get_balance(){
        return bal;
    }
    add_interest(double x){
        bal = (x/100) * bal + bal;
    }
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

   int months = 1;
   double rate = 0;
   double init = 0;
   cout<<"Enter initial bank balance ";
   cin>> init;
   Account new_account(init);
   double firstbal = new_account.get_balance();
   cout<<"Enter annual interest rate ";
   cin>> rate;
   double final_amount = new_account.get_balance();
   final_amount = final_amount * 2;
       while (new_account.get_balance() <= final_amount)
           {
              new_account.add_interest(rate / 12);
              months++;
           }
       cout << "It took " << months << " months for " << firstbal << " to double at " << rate << "% annual interest.";
       cout << "\nAccount balance: " <<new_account.get_balance();
   return 0;
}

