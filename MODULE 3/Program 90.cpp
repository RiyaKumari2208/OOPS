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
        cout << "Resolving ambiguity using scope resolution operator:" << endl;
        Base1::show();  
        Base2::show();  
    }
};

int main() {
    Derived d;

    d.showBoth();

    return 0;
}
