#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Student {
    int roll;
    char name[30];
    float marks;
};

void inputStudent(Student &s) {
    cout << "Enter roll number: ";
    cin >> s.roll;
    cin.ignore();  

    cout << "Enter name: ";
    cin.getline(s.name, 30);

    cout << "Enter marks: ";
    cin >> s.marks;
}

void displayStudent(const Student &s) {
    cout << "\nRoll Number: " << s.roll;
    cout << "\nName: " << s.name;
    cout << "\nMarks: " << s.marks << endl;
}

int main() {
    int n;
    cout << "How many students do you want to store? ";
    cin >> n;

    Student s;

    ofstream fout("student.dat", ios::binary);
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        inputStudent(s);
        fout.write((char*)&s, sizeof(s));
    }
    fout.close();
    cout << "\nData written to binary file successfully!\n";

    ifstream fin("student.dat", ios::binary);
    cout << "\n--- Students Data from Binary File ---\n";

    while (fin.read((char*)&s, sizeof(s))) {
        displayStudent(s);
    }
    fin.close();

    return 0;
}
