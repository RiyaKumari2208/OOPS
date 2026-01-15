#include <iostream>
#include <exception>
using namespace std;

class InsufficientFunds : public exception
{
public:
    const char* what() const noexcept override
    {
        return "Error: Insufficient funds for withdrawal!";
    }
};

class BankAccount
{
private:
    double balance;

public:
    BankAccount(double initialBalance)
    {
        if (initialBalance < 0)
            balance = 0;
        else
            balance = initialBalance;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount > balance)
            throw InsufficientFunds();
        balance -= amount;
        cout << "Withdrawn: $" << amount << endl;
    }

    void displayBalance()
    {
        cout << "Current Balance: $" << balance << endl;
    }
};

int main()
{
    BankAccount account(2000);

    account.displayBalance();

    try
    {
        cout << "\nAttempting to withdraw $500..." << endl;
        account.withdraw(500);  

        cout << "\nAttempting to withdraw $700..." << endl;
        account.withdraw(700);  
    }
    catch (InsufficientFunds& e)
    {
        cout << e.what() << endl;
    }

    account.displayBalance();

    cout << "\nProgram executed safely." << endl;
    return 0;
}
