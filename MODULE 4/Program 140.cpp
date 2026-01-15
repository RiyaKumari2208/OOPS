#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Student {
    int roll;
    char name[30];
    float marks;
};

void displayStudent(const Student &s) {
    cout << "\nRoll Number: " << s.roll;
    cout << "\nName: " << s.name;
    cout << "\nMarks: " << s.marks << endl;
}

void inputStudent(Student &s) {
    cout << "Enter roll number: ";
    cin >> s.roll;
    cin.ignore(); 

    cout << "Enter name: ";
    cin.getline(s.name, 30);

    cout << "Enter marks: ";
    cin >> s.marks;
}

int main() {
    fstream file("student.dat", ios::binary | ios::in | ios::out);
    if (!file) {
        cout << "Error! File not found." << endl;
        return 0;
    }

    int rollToUpdate;
    cout << "Enter roll number of student to update: ";
    cin >> rollToUpdate;
    cin.ignore(); 

    Student s;
    bool found = false;

    while (file.read((char*)&s, sizeof(s))) {
        if (s.roll == rollToUpdate) {
            cout << "\nRecord Found. Enter new details:\n";
            inputStudent(s);

            file.seekp(-static_cast<int>(sizeof(s)), ios::cur);
            file.write((char*)&s, sizeof(s));
            cout << "\nRecord updated successfully!\n";
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Record with roll number " << rollToUpdate << " not found.\n";
    }

    file.close();
    return 0;
}
