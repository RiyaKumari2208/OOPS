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

    virtual ~Employee() { 
        cout << "Base Employee destructor called" << endl;
    }
};

class Manager : public Employee {
public:
    void displayRole() override {
        cout << "Employee Role: Manager" << endl;
    }

    ~Manager() {
        cout << "Manager destructor called" << endl;
    }
};

class Engineer : public Employee {
public:
    void displayRole() override {
        cout << "Employee Role: Engineer" << endl;
    }

    ~Engineer() {
        cout << "Engineer destructor called" << endl;
    }
};

int main() {
    Employee* empPtr;  

    cout << "Creating Manager object via base pointer:" << endl;
    empPtr = new Manager();
    empPtr->inputData();
    empPtr->displayRole(); 
    delete empPtr; 

    cout << "\nCreating Engineer object via base pointer:" << endl;
    empPtr = new Engineer();
    empPtr->inputData();
    empPtr->displayRole(); 
    delete empPtr; 

    return 0;
}
