/*
Hunter Lewis and Quan Do
SEC 07 and 08
Team 8
September 8th 2020
*/
#include <iostream>
using namespace std;
#include "Bank.h"
#include <string>
Bank::Bank() : savings(), checking()
{
}
Bank::Bank(double checking_amount, double savings_amount) :
savings(savings_amount), checking(checking_amount)
{	
}
void Bank::deposit(double money, string acc){
	if(acc == ("C")){
		checking.deposit(money);
		}
		else{
			savings.deposit(money);
		}    
}
void Bank::withdraw(double money, string acc){
	if(acc == ("C"))
            checking.withdraw(money);
        else
            savings.withdraw(money);
}
void Bank::transfer(double money, string acc){
	if(acc == ("C")){
		if(checking.get_balance() < money) {
			checking.withdraw(money);
		}
		else{
			checking.withdraw(money);
			savings.deposit(money);
		}
		
	}
	else if(acc == ("S")){
		if(savings.get_balance() < money){
			savings.withdraw(money);
		}
		else{
			savings.withdraw(money);
			checking.deposit(money);
		}
	}
	else{
		cout<<"money transaction error";
	}
}
void Bank::print_balances(){
    int c = checking.get_balance();
    int * cPtr = &c;
    int s = savings.get_balance();
    int * sPtr = &s;
    cout << "Checking: " << *cPtr;
    cout << "\nSavings: " << *sPtr <<endl;
}
int main()
{
Bank my_bank;
cout << "Inital bank balances: \n";
my_bank.print_balances(); /* set up empty accounts */

cout << "Adding some money to accounts: \n";
my_bank.deposit(1000, "S"); /* deposit $1000 to savings */
my_bank.deposit(2000, "C"); /* deposit $2000 to checking */
my_bank.print_balances();

cout << "Taking out $1500 from checking,and moving $200 from";
cout << " savings to checking.\n";
my_bank.withdraw(1500, "C"); /* withdraw $1500 from checking, 500 left*/
my_bank.transfer(200, "S"); /* transfer $200 from savings, 1000-200 saving, 200 + 500 = 700*/
my_bank.print_balances();

cout << "Trying to transfer $900 from Checking.\n";
my_bank.transfer(900,"C"); /* */
my_bank.print_balances();

cout << "trying to transfer $900 from Savings.\n";
my_bank.transfer(900,"S");
my_bank.print_balances();

return 0;
}
