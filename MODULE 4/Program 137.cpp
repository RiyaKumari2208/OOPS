#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

class Student {
public:
    int roll;
    char name[30];
    float marks;

    void input() {
        cout << "Enter roll number: ";
        cin >> roll;
        cin.ignore(); 

        cout << "Enter name: ";
        cin.getline(name, 30);

        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\nRoll Number: " << roll;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks << endl;
    }
};

int main() {
    Student s;

    ofstream fout("student.dat", ios::binary);
    s.input();
    fout.write((char*)&s, sizeof(s));
    fout.close();
    cout << "\nData written to binary file successfully!\n";

    ifstream fin("student.dat", ios::binary);
    fin.read((char*)&s, sizeof(s));
    cout << "\n--- Data read from binary file ---";
    s.display();
    fin.close();

    return 0;
}
