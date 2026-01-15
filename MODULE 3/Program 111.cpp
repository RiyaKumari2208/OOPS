#include <iostream>
using namespace std;

class BankAccount {
protected:
    string accountHolder;
    int accountNumber;
    double balance;

public:
    BankAccount(string name, int accNo, double bal) {
        accountHolder = name;
        accountNumber = accNo;
        balance = bal;
    }

    virtual void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    virtual void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    virtual void display() {
        cout << "\nAccount Number: " << accountNumber;
        cout << "\nAccount Holder: " << accountHolder;
        cout << "\nBalance: " << balance << endl;
    }

    virtual ~BankAccount() {}
};

class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(string name, int accNo, double bal, double rate)
        : BankAccount(name, accNo, bal) {
        interestRate = rate;
    }

    void addInterest() {
        double interest = balance * interestRate / 100;
        balance += interest;
        cout << "Interest added: " << interest << endl;
    }

    void display() override {
        BankAccount::display();
        cout << "Account Type: Savings" << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

class CurrentAccount : public BankAccount {
private:
    double overdraftLimit;

public:
    CurrentAccount(string name, int accNo, double bal, double limit)
        : BankAccount(name, accNo, bal) {
        overdraftLimit = limit;
    }

    void withdraw(double amount) override {
        if (amount <= balance + overdraftLimit) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Exceeds overdraft limit!" << endl;
        }
    }

    void display() override {
        BankAccount::display();
        cout << "Account Type: Current" << endl;
        cout << "Overdraft Limit: " << overdraftLimit << endl;
    }
};

int main() {
    BankAccount* accounts[2];

    accounts[0] = new SavingsAccount("Rinku", 101, 7000, 3);
    accounts[1] = new CurrentAccount("Reema", 102, 4000, 2000);

    accounts[0]->deposit(2000);
    accounts[1]->deposit(1500);

    accounts[0]->withdraw(1000);
    accounts[1]->withdraw(4000); 

    SavingsAccount* sa = dynamic_cast<SavingsAccount*>(accounts[0]);
    if (sa) sa->addInterest();

    cout << "\n--- Account Details ---\n";
    for (int i = 0; i < 2; i++) {
        accounts[i]->display();
    }
    
    for (int i = 0; i < 2; i++) {
        delete accounts[i];
    }

    return 0;
}
