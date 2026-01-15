#include <iostream>
using namespace std;

class Base {
public:
    int x = 20;

    void showBase() {
        cout << "Value of x from Base class: " << x << endl;
    }
};

class Derived : public Base {
public:
    void showDerived() {
        cout << "Accessing Base class member x in Derived class: " << x << endl;
    }
};

int main() {
    Derived d;

    d.showBase();
    d.showDerived();
    cout << "Accessing Base class variable using Derived object: " << d.x << endl;

    return 0;
}
