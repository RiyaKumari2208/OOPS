#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    string name;
    float salary;

    void getData()
    {
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Employee Salary: ";
        cin >> salary;

    }
    void showData()
    {
        cout << "\nEmployee Details " << endl;
        cout << "Employee ID: " << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Enter Salary: " << salary << endl;

    }
};

int main()
{
    Employee e;
    e.getData();
    e.showData();
    return 0;
}