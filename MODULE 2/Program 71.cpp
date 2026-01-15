#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    static int studentCount; 

public:
    
    Student(string n, int r) {
        name = n;
        rollNo = r;
        studentCount++; 
    }

    void display() {
        cout << "Name: " << name << ", Roll No: " << rollNo << endl;
    }

    static void showStudentCount() {
        cout << "Total students: " << studentCount << endl;
    }
};

int Student::studentCount = 0;

int main() {
    Student s1("Aliya", 801);
    Student s2("Bobby", 802);
    Student s3("Cherry", 803);

    cout << "\nStudent Details:\n";
    s1.display();
    s2.display();
    s3.display();

    Student::showStudentCount();

    return 0;
}
