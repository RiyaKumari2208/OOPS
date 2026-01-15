#include <iostream>
using namespace std;

class Employee {
public:
    string name;

    void inputData() {
        cout << "Enter employee name: ";
        cin >> name;
    }

    virtual void displayRole() {
        cout << "Employee Role: General Employee" << endl;
    }
};

class Manager : public Employee {
public:
    void displayRole() override {
        cout << "Employee Role: Manager" << endl;
    }
};

class Engineer : public Employee {
public:
    void displayRole() override {
        cout << "Employee Role: Engineer" << endl;
    }
};

int main() {
    Employee* empPtr;  

    Manager m;
    Engineer e;

    empPtr = &m;
    empPtr->inputData();
    empPtr->displayRole(); 

    cout << endl;

    empPtr = &e;
    empPtr->inputData();
    empPtr->displayRole(); 

    return 0;
}
