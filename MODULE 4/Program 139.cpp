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

int main() {
    int rollToSearch;
    cout << "Enter roll number to search: ";
    cin >> rollToSearch;

    ifstream fin("student.dat", ios::binary);
    if (!fin) {
        cout << "Error! File not found." << endl;
        return 0;
    }

    Student s;
    bool found = false;

    while (fin.read((char*)&s, sizeof(s))) {
        if (s.roll == rollToSearch) {
            cout << "\nRecord Found:";
            displayStudent(s);
            found = true;
            break;  
        }
    }

    if (!found) {
        cout << "Record with roll number " << rollToSearch << " not found." << endl;
    }

    fin.close();
    return 0;
}
