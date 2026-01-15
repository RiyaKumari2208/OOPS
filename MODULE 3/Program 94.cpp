#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int rollNo;

public:
    void inputStudent() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void displayStudent() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

class Marks : public Student {
private:
    int mark1, mark2, mark3;
    int total;
    float percentage;

public:
    void inputMarks() {
        cout << "Enter marks for 3 subjects: ";
        cin >> mark1 >> mark2 >> mark3;
    }

    void calculate() {
        total = mark1 + mark2 + mark3;
        percentage = total / 3.0;
    }

    void displayResult() {
        displayStudent(); 
        cout << "Marks: " << mark1 << ", " << mark2 << ", " << mark3 << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    Marks m;

    cout << "--- Student Mark Processing ---" << endl;
    m.inputStudent();
    m.inputMarks();
    m.calculate();
    cout << "\n--- Student Result ---" << endl;
    m.displayResult();

    return 0;
}
