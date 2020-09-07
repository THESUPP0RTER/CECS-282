#ifndef ACCOUNT_H
#define ACCOUNT_H
class Account
{
private:
    double bal;
public:
    Account();
    Account(double b);
    double deposit(double d);
    double withdraw(double w);
    double get_balance();
};
#endif
