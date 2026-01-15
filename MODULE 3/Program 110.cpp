#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    
    void inputData() {
        cout << "Enter employee name: ";
        cin >> name;
    }

    virtual void calculateSalary() {
        cout << name << "'s salary (Base Employee): 0" << endl;
    }

    virtual ~Employee() {}
};

class Manager : public Employee {
private:
    double basic, allowance;
public:
    void inputData() {
        cout << "Enter manager name: "; cin >> name;
        cout << "Enter basic salary: "; cin >> basic;
        cout << "Enter allowance: "; cin >> allowance;
    }

    void calculateSalary() override {
        cout << name << "'s salary (Manager): " << (basic + allowance) << endl;
    }
};

class Engineer : public Employee {
private:
    double basic, bonus;
public:
    void inputData() {
        cout << "Enter engineer name: "; cin >> name;
        cout << "Enter basic salary: "; cin >> basic;
        cout << "Enter bonus: "; cin >> bonus;
    }

    void calculateSalary() override {
        cout << name << "'s salary (Engineer): " << (basic + bonus) << endl;
    }
};

int main() {
    const int n = 3;
    Employee* empArray[n]; 

    empArray[0] = new Manager();
    empArray[1] = new Engineer();
    empArray[2] = new Manager();

    for (int i = 0; i < n; i++) {
        empArray[i]->inputData();
    }

    cout << "\nCalculating salaries using polymorphism:\n";
    for (int i = 0; i < n; i++) {
        empArray[i]->calculateSalary(); 
    }

    for (int i = 0; i < n; i++) {
        delete empArray[i]; 
    }

    return 0;
}
