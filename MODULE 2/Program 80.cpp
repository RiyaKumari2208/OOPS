#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;

public:
    
    Student(int r, string n) {
        roll = r;
        name = n;
        cout << "Constructor called: Object created\n";
    }

    void display() {
        cout << "Roll No: " << roll << endl;
        cout << "Name   : " << name << endl;
    }

    ~Student() {
        cout << "Destructor called: Object deleted\n";
    }
};

int main() {
    
    Student* s = new Student(101, "Alina");

    cout << "\nStudent Details:\n";
    s->display();

    delete s;

    return 0;
}
