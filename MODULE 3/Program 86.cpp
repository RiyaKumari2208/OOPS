#include <iostream>
using namespace std;

class Base {
public:
    void showBase() {
        cout << "This is Base class function." << endl;
    }
};

class Derived : private Base {
public:
    void showDerived() {
        cout << "This is Derived class function." << endl;
        
        showBase();
    }
};

int main() {
    Derived d;

    // d.showBase();  
    d.showDerived(); 

    return 0;
}
