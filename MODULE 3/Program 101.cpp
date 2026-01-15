#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int empID;

public:
    void inputEmployee() {
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter employee ID: ";
        cin >> empID;
    }

    void displayEmployee() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << empID << endl;
    }

    virtual void calculateSalary() {
        cout << "Base Employee: No salary calculation defined." << endl;
    }
};

class Manager : public Employee {
private:
    double basic, allowance, deduction, netSalary;

public:
    void inputManagerSalary() {
        cout << "Enter basic pay for Manager: ";
        cin >> basic;
        cout << "Enter allowance for Manager: ";
        cin >> allowance;
        cout << "Enter deduction for Manager: ";
        cin >> deduction;
    }

    void calculateSalary() override {
        netSalary = basic + allowance - deduction;
        cout << "Manager Net Salary: " << netSalary << endl;
    }
};


class Engineer : public Employee {
private:
    double basic, allowance, deduction, netSalary;

public:
    void inputEngineerSalary() {
        cout << "Enter basic pay for Engineer: ";
        cin >> basic;
        cout << "Enter allowance for Engineer: ";
        cin >> allowance;
        cout << "Enter deduction for Engineer: ";
        cin >> deduction;
    }

    void calculateSalary() override { 
        netSalary = basic + allowance - deduction;
        cout << "Engineer Net Salary: " << netSalary << endl;
    }
};

int main() {
    Employee* empPtr; 

    Manager m;
    Engineer e;

    empPtr = &m;
    empPtr->inputEmployee();
    m.inputManagerSalary();
    empPtr->calculateSalary(); 

    cout << endl;

    empPtr = &e;
    empPtr->inputEmployee();
    e.inputEngineerSalary();
    empPtr->calculateSalary(); 

    return 0;
}
