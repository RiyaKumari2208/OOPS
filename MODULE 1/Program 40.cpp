#include <iostream>
using namespace std;


struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    Student s;

    cout << "Enter student roll number: ";
    cin >> s.rollNo;

    cin.ignore(); 

    cout << "Enter student name: ";
    cin.getline(s.name, 50);

    cout << "Enter student marks: ";
    cin >> s.marks;

    cout << "\nStudent Details:\n";
    cout << "Roll Number: " << s.rollNo << endl;
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;

    return 0;
}
