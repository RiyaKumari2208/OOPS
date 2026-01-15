#include <iostream>
using namespace std;

class Base1 {
public:
    void show() {
        cout << "This is Base1 show function." << endl;
    }
};

class Base2 {
public:
    void show() {
        cout << "This is Base2 show function." << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void showBoth() {
        // Resolve ambiguity using scope resolution operator
        Base1::show();
        Base2::show();
    }
};

int main() {
    Derived d;

    // Call derived class function that resolves ambiguity
    d.showBoth();

    return 0;
}
