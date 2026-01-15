#include <iostream>
using namespace std;

class Employee {
private:
    int salary;        

public:
    string name;       

    void setSalary(int s) {
        salary = s;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    
    Employee emp;

    emp.name = "Rohan";

    emp.setSalary(80000);

    emp.display();

    return 0;
}
