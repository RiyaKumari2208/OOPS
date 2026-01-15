#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int id;

public:
    static int count;  

    Employee(string n, int i) {
        name = n;
        id = i;
        count++;  
    }

    void display() {
        cout << "Employee Name: " << name << ", ID: " << id << endl;
    }

    static void showCount() {
        cout << "Total Employees: " << count << endl;
    }
};

int Employee::count = 0;

int main() {
    Employee e1("Kumkum", 50);
    Employee e2("Pankaj", 51);
    Employee e3("Khushi", 52);

    e1.display();
    e2.display();
    e3.display();

    Employee::showCount();

    return 0;
}
