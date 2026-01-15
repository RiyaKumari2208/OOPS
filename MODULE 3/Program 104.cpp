#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    virtual void calculateSalary() = 0; 
};

class Manager : public Employee {
    double basic, allowance, deduction;
public:
    void inputData() {
        cout << "Manager name: "; cin >> name;
        cout << "Basic: "; cin >> basic;
        cout << "Allowance: "; cin >> allowance;
        cout << "Deduction: "; cin >> deduction;
    }
    void calculateSalary() override {
        cout << name << "'s Net Salary (Manager): " << (basic + allowance - deduction) << endl;
    }
};

class Engineer : public Employee {
    double basic, bonus;
public:
    void inputData() {
        cout << "Engineer name: "; cin >> name;
        cout << "Basic: "; cin >> basic;
        cout << "Bonus: "; cin >> bonus;
    }
    void calculateSalary() override {
        cout << name << "'s Net Salary (Engineer): " << (basic + bonus) << endl;
    }
};

int main() {
    Employee* emp;

    Manager m;
    m.inputData();
    emp = &m;
    emp->calculateSalary();

    cout << endl;

    Engineer e;
    e.inputData();
    emp = &e;
    emp->calculateSalary();

    return 0;
}
