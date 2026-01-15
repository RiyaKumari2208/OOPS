#include <iostream>
#include <iomanip>  // Required for setw and setprecision
using namespace std;

int main() {
    string name;
    int age;
    double marks;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your marks: ";
    cin >> marks;

    cout << "\n----- Formatted Output -----\n";
    cout << setw(10) << "Name" 
         << setw(10) << "Age" 
         << setw(10) << "Marks" << endl;

    cout << setw(10) << name 
         << setw(10) << age 
         << setw(10) << fixed << setprecision(2) << marks << endl;

    return 0;
}
