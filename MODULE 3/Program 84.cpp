#include <iostream>
using namespace std;

class Person {
public:
    void showPerson() {
        cout << "I am a Person." << endl;
    }
};

class Student : public Person {
public:
    void showStudent() {
        cout << "I am a Student." << endl;
    }
};

class Teacher : public Person {
public:
    void showTeacher() {
        cout << "I am a Teacher." << endl;
    }
};

int main() {
    Student s;
    Teacher t;

    s.showPerson();
    s.showStudent();

    cout << endl;

    t.showPerson();
    t.showTeacher();

    return 0;
}
