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
};

class Payroll : public Employee {
private:
    double basicPay;
    double allowances;
    double deductions;
    double netSalary;

public:
    void inputPayroll() {
        cout << "Enter basic pay: ";
        cin >> basicPay;
        cout << "Enter allowances: ";
        cin >> allowances;
        cout << "Enter deductions: ";
        cin >> deductions;
    }

    void calculateSalary() {
        netSalary = basicPay + allowances - deductions;
    }

    void displayPayroll() {
        displayEmployee(); 
        cout << "Basic Pay: " << basicPay << endl;
        cout << "Allowances: " << allowances << endl;
        cout << "Deductions: " << deductions << endl;
        cout << "Net Salary: " << netSalary << endl;
    }
};

int main() {
    Payroll p;

    cout << "--- Employee Payroll Processing ---" << endl;
    p.inputEmployee();
    p.inputPayroll();
    p.calculateSalary();
    cout << "\n--- Employee Payroll ---" << endl;
    p.displayPayroll();

    return 0;
}
