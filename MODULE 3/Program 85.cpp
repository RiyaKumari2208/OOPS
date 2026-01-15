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

class Result : public Student {
public:
    void showResult() {
        cout << "I have a Result." << endl;
    }
};

int main() {
    Result r;
    Teacher t;

    r.showPerson();
    r.showStudent();
    r.showResult();

    cout << endl;

    t.showPerson();
    t.showTeacher();

    return 0;
}
