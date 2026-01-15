#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    float marks;

    cout << "Enter your name: ";
    cin >> name;  

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your marks: ";
    cin >> marks;

    cout << "\n----- User Details -----\n";
    cout << "Name  : " << name << endl;
    cout << "Age   : " << age << endl;
    cout << "Marks : " << marks << endl;

    return 0;
}
