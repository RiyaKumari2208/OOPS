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
    const int size = 4;
    Employee* empArray[size]; 

    empArray[0] = new Manager();
    empArray[1] = new Engineer();
    empArray[2] = new Manager();
    empArray[3] = new Engineer();

    for (int i = 0; i < size; i++) {
        empArray[i]->inputData();
    }

    cout << "\nDisplaying Roles:\n";
    
    for (int i = 0; i < size; i++) {
        empArray[i]->displayRole(); 
    }

    for (int i = 0; i < size; i++) {
        delete empArray[i];
    }

    return 0;
}
