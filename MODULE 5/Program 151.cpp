#include <iostream>
using namespace std;

class Demo {
    string name;
public:
    Demo(string n) : name(n) {
        cout << "Constructor called for " << name << endl;
    }
    ~Demo() {
        cout << "Destructor called for " << name << endl;
    }
};

void functionB() {
    Demo d3("B_local");
    cout << "Inside functionB, about to throw exception...\n";
    throw 99; 
}

void functionA() {
    Demo d2("A_local");
    cout << "Inside functionA, calling functionB...\n";
    functionB(); 
    cout << "This line will NOT execute in functionA\n";
}

int main() {
    Demo d1("main_local");
    try {
        cout << "Inside main, calling functionA...\n";
        functionA(); 
        cout << "This line will NOT execute in main try block\n";
    }
    catch (int e) {
        cout << "Exception caught in main: " << e << endl;
    }

    cout << "Program continues after try-catch.\n";
    return 0;
}
