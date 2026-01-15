#include <iostream>
using namespace std;

class Employee
{
private:
    int empId;
    string empName;
    float basicSalary;
    float hra;
    float da;
    float grossSalary;

public:
    
    void input()
    {
        cout << "Enter Employee ID: ";
        cin >> empId;

        cout << "Enter Employee Name: ";
        cin >> empName;

        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    void calculateSalary()
    {
        hra = 0.20 * basicSalary;   
        da  = 0.10 * basicSalary;   
        grossSalary = basicSalary + hra + da;
    }

    void display()
    {
        cout << "\n----- Employee Payroll Details -----\n";
        cout << "Employee ID: " << empId << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "HRA: " << hra << endl;
        cout << "DA: " << da << endl;
        cout << "Gross Salary: " << grossSalary << endl;
    }
};

int main()
{
    Employee emp;
    int choice;

    do
    {
        cout << "\n===== Employee Payroll System =====\n";
        cout << "1. Enter Employee Details\n";
        cout << "2. Calculate Salary\n";
        cout << "3. Display Payroll\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            emp.input();
            break;
        case 2:
            emp.calculateSalary();
            cout << "Salary calculated successfully.\n";
            break;
        case 3:
            emp.display();
            break;
        case 4:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
