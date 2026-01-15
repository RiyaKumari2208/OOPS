#include <iostream>
using namespace std;

class Person {
public:
    void displayPerson() {
        cout << "I am a person." << endl;
    }
};

class Student : public Person {
public:
    void displayStudent() {
        cout << "I am a student." << endl;
    }
};

int main() {
    Student s;

    s.displayPerson();   
    s.displayStudent();  

    return 0;
}
