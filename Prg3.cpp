#include <iostream>
using namespace std;
class BankAccount {
private:
    double balance;

public:
BankAccount(double amount)
{
    balance = amount;
}
    void db() 
    {
    cout << "Current Balance: " << balance << endl;
    }
    friend void deposit(BankAccount &ac, double amount);
    friend void withdraw(BankAccount &ac, double amount);
};


void deposit(BankAccount &ac, double amount) 
{
   
    if (amount > 0)
     {
        cout << "Depositing " << amount << endl;
        ac.balance += amount;
    } else 
    {
        cout << "Wrong Amount" << endl;
    }
}
    void withdraw(BankAccount &ac, double amount) 
    {
        if (amount > 0 && ac.balance >= amount) 
    {
        cout << "Withdrawing " << amount <<endl;
        ac.balance -= amount;
    }
    else
    cout<<"unsufficient funds"<<endl;
    }

int main() 
{ 
    BankAccount AC(1000.0);
    AC.db();

    deposit(AC, 500.0);
    AC.db();

    withdraw(AC, 300.0);
    AC.db();

    withdraw(AC, 800.0); 
    AC.db();
    return 0;
}
