#include <iostream>
using namespace std;

class Employee {
public:
    string name;

    void inputData() {
        cout << "Enter employee name: ";
        cin >> name;
    }

    void staticFunction() { 
        cout << name << " is a general employee (Static Binding)" << endl;
    }

    virtual void dynamicFunction() { 
        cout << name << " is a general employee (Dynamic Binding)" << endl;
    }

    virtual ~Employee() {}
};

class Manager : public Employee {
public:
    void staticFunction() {
        cout << name << " is a Manager (Static Binding)" << endl;
    }

    void dynamicFunction() override { 
        cout << name << " is a Manager (Dynamic Binding)" << endl;
    }
};

int main() {
    Employee* empPtr;
    Manager m;

    m.inputData();
    empPtr = &m;

    cout << "\nStatic Binding (Non-virtual function):\n";
    empPtr->staticFunction(); 

    cout << "\nDynamic Binding (Virtual function):\n";
    empPtr->dynamicFunction(); 

    return 0;
}
