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
    int rollToDelete;
    cout << "Enter roll number of student to delete: ";
    cin >> rollToDelete;

    ifstream fin("student.dat", ios::binary);
    if (!fin) {
        cout << "Error! File not found." << endl;
        return 0;
    }

    ofstream fout("temp.dat", ios::binary);
    Student s;
    bool found = false;

    while (fin.read((char*)&s, sizeof(s))) {
        if (s.roll == rollToDelete) {
            found = true;  
            continue;
        }
        fout.write((char*)&s, sizeof(s));
    }

    fin.close();
    fout.close();

    if (found) {
        remove("student.dat");          
        rename("temp.dat", "student.dat"); 
        cout << "\nRecord deleted successfully!\n";
    } else {
        remove("temp.dat");  
        cout << "Record with roll number " << rollToDelete << " not found.\n";
    }

    return 0;
}
