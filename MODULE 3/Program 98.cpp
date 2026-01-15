#include <iostream>
using namespace std;

class Employee {
public:
    string name;

    void inputName() {
        cout << "Enter employee name: ";
        cin >> name;
    }

    virtual void displayRole() {
        cout << "Employee role: General Employee" << endl;
    }
};

class Manager : public Employee {
public:
    void displayRole() override {
        cout << "Employee role: Manager" << endl;
    }
};

class Engineer : public Employee {
public:
    void displayRole() override {
        cout << "Employee role: Engineer" << endl;
    }
};

int main() {
    Employee* empPtr; // Base class pointer

    Manager m;
    Engineer e;

    empPtr = &m;
    empPtr->inputName();
    empPtr->displayRole(); 

    cout << endl;

    empPtr = &e;
    empPtr->inputName();
    empPtr->displayRole(); 

    return 0;
}
