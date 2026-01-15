#include <iostream>
using namespace std;

class A {
public:
    int x;
    A() {
        x = 5;
        cout << "Constructor of A called." << endl;
    }
};

class B : virtual public A {
public:
    B() {
        cout << "Constructor of B called." << endl;
    }
};

class C : virtual public A {
public:
    C() {
        cout << "Constructor of C called." << endl;
    }
};

class D : public B, public C {
public:
    D() {
        cout << "Constructor of D called." << endl;
    }
    void show() {
        cout << "Value of x from A: " << x << endl;
    }
};

int main() {
    D obj;
    obj.show();
    return 0;
}   