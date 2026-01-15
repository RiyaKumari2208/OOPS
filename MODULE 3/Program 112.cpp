#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks1, marks2, marks3;
    float total;
    float percentage;

public:

    void input()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks of Subject 1: ";
        cin >> marks1;

        cout << "Enter Marks of Subject 2: ";
        cin >> marks2;

        cout << "Enter Marks of Subject 3: ";
        cin >> marks3;
    }

    void calculate()
    {
        total = marks1 + marks2 + marks3;
        percentage = total / 3;
    }

    void display()
    {
        cout << "\n----- Student Result -----\n";
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        if (percentage >= 40)
            cout << "Result: PASS" << endl;
        else
            cout << "Result: FAIL" << endl;
    }
};

int main()
{
    Student s;

    s.input();
    s.calculate();
    s.display();

    return 0;
}
