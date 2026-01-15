#include <iostream>
using namespace std;

class BankAccount {
private:
    string name;     
    double balance;  

public:
    
    BankAccount(string n, double b) {
        name = n;
        if (b >= 0)
            balance = b;
        else
            balance = 0;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!\n";
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Cannot withdraw!\n";
        }
    }

    void display() const {
        cout << "Account Holder: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    
    BankAccount account("Tiya",1000);

    // Show initial details
    cout << "Initial Account Details:\n";
    account.display();

    account.deposit(900);
    account.withdraw(700);
    account.withdraw(2000); 

    cout << "\nFinal Account Details:\n";
    account.display();

    return 0;
}
