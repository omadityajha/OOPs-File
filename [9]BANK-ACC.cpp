// WAP to manage a bank account using classes include deposit and withdrawal member functions.

// Author: OMADITYA JHA

#include <iostream>
using namespace std;     

class BankAccount
{
    public:
    int balance = 0;
        int deposit(int amount)
    {
        balance += amount;
        return balance;
    }
    int withdraw(int amount)
    {
        balance -= amount;
        return balance;
    }
};

int main()
{
    BankAccount acc1;
cout<<"Enter the Operation you want to perform"<<"\n";
cout<<"1) Deposit"<<"\n"<<"2) Withdraw"<<"\n"<<"3) Exit"<<"\n";
int choice;
cin>>choice;
int amount;
switch(choice)
{
    case 1:
    cout<<"Enter the amount you want to deposit"<<"\n";
    cin>>amount;
    acc1.deposit(amount);
    cout<<"Your current balance is "<<acc1.balance<<"\n";
    break;
    case 2:
    cout<<"Enter the amount you want to withdraw"<<"\n";
    cin>>amount;
    acc1.withdraw(amount);
    cout<<"Your current balance is "<<acc1.balance<<"\n";
    break;
    case 3:
    cout<<"Exiting Bank Account"<<"\n";
    break;
    default:
    cout<<"Your Balance is "<<acc1.balance<<"\n";
}
    return 0;
}