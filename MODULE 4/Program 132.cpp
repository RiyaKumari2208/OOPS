#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    int roll;
    char name[30];
    float marks;

    void getData() {
        cout << "Enter roll number: ";
        cin >> roll;
        cin.ignore();  

        cout << "Enter name: ";
        cin.getline(name, 30);

        cout << "Enter marks: ";
        cin >> marks;
    }

    void showData() {
        cout << "\nRoll Number: " << roll;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks << endl;
    }
};

int main() {
    Student s;

    ofstream fout("student.dat", ios::binary);
    s.getData();
    fout.write((char*)&s, sizeof(s));
    fout.close();

    ifstream fin("student.dat", ios::binary);
    fin.read((char*)&s, sizeof(s));

    cout << "\n--- Data read from file ---";
    s.showData();

    fin.close();
    return 0;
}
