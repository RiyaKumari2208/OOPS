#include <iostream>
using namespace std;

class Student {
private:
    const int roll;   
    string name;

public:
    
    Student(int r, string n) : roll(r), name(n) {
        cout << "Constructor called" << endl;
    }

    void display() {
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s1(109, "Muskan");  
    s1.display();

    return 0;
}
