#include <iostream>
#include <string>
using namespace std;

class Address {
private:
    string city;
    string state;

public:
    Address() {
        city = "";
        state = "";
    }

    Address(string c, string s) {
        city = c;
        state = s;
    }

    void display() {
        cout << city << ", " << state;
    }
};

class Course {
private:
    int courseId;
    string courseName;

public:
    Course() {
        courseId = 0;
        courseName = "";
    }

    Course(int id, string name) {
        courseId = id;
        courseName = name;
    }

    void display() {
        cout << courseId << " - " << courseName;
    }
};

class Student {
private:
    int rollNo;
    string name;
    Address address;   
    Course course;     

public:
    Student(int r, string n, Address a, Course c)
        : address(a), course(c) {
        rollNo = r;
        name = n;
    }

    void displayStudent() {
        cout << "\n------ Student Details ------\n";
        cout << "Roll No : " << rollNo << endl;
        cout << "Name    : " << name << endl;
        cout << "Address : ";
        address.display();
        cout << endl;
        cout << "Course  : ";
        course.display();
        cout << endl;
    }
};

int main() {
    Address addr("Bokaro", "Jharkhand");
    Course crs(201, "Computer Science");

    Student s1(1, "Aneet", addr, crs);
    s1.displayStudent();

    return 0;
}
