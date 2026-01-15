#include <iostream>
using namespace std;

class Employee {
public:
    Employee() {
        cout << "Employee constructor called." << endl;
    }

    virtual ~Employee() {
        cout << "Employee destructor called." << endl;
    }
};

class Manager : public Employee {
public:
    Manager() {
        cout << "Manager constructor called." << endl;
    }

    ~Manager() {
        cout << "Manager destructor called." << endl;
    }
};

class Engineer : public Employee {
public:
    Engineer() {
        cout << "Engineer constructor called." << endl;
    }

    ~Engineer() {
        cout << "Engineer destructor called." << endl;
    }
};

int main() {
    Employee* empPtr;

    cout << "Creating Manager object:" << endl;
    empPtr = new Manager(); 
    delete empPtr;         

    cout << "\nCreating Engineer object:" << endl;
    empPtr = new Engineer();
    delete empPtr;

    return 0;
}
