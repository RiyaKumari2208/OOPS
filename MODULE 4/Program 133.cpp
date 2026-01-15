#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
public:
    int roll;
    string name;
    float marks;

    void input() {
        cout << "Enter roll number: ";
        cin >> roll;
        cin.ignore();   

        cout << "Enter student name: ";
        getline(cin, name);

        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;

    ofstream fout("student.txt");
    s.input();
    fout << s.roll << endl;
    fout << s.name << endl;
    fout << s.marks << endl;
    fout.close();

    cout << "\nData stored successfully!\n\n";

    ifstream fin("student.txt");
    fin >> s.roll;
    fin.ignore();   
    getline(fin, s.name);
    fin >> s.marks;
    fin.close();

    cout << "--- Student Data Read from File ---\n";
    s.display();

    return 0;
}
