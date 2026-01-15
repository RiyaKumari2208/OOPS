#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int id;
    static int companyCode; 

public:
    
    Employee(string n, int i) {
        name = n;
        id = i;
    }

    void display() {
        cout << "Employee Name: " << name << ", ID: " << id
             << ", Company Code: " << companyCode << endl;
    }

    static void setCompanyCode(int code) {
        companyCode = code;
    }

    static void showCompanyCode() {
        cout << "Company Code: " << companyCode << endl;
    }
};

int Employee::companyCode = 0;

int main() {
    
    Employee::setCompanyCode(1010);

    Employee e1("Rekha", 101);
    Employee e2("Shreya", 102);

    cout << "\nEmployee Details:\n";
    e1.display();
    e2.display();

    Employee::showCompanyCode();

    return 0;
}
