#include <iostream>
using namespace std;

class B;

class A {
private:
    int valueA;  

public:
    
    A(int val) {
        valueA = val;
    }

    friend void compare(A a, B b);
};

class B {
private:
    int valueB;  

public:
    
    B(int val) {
        valueB = val;
    }

    friend void compare(A a, B b);
};

void compare(A a, B b) {
    if (a.valueA > b.valueB) {
        cout << "Class A has a larger value: " << a.valueA << endl;
    } else if (a.valueA < b.valueB) {
        cout << "Class B has a larger value: " << b.valueB << endl;
    } else {
        cout << "Both classes have equal values: " << a.valueA << endl;
    }
}

int main() {
    int val1, val2;

    cout << "Enter value for Class A: ";
    cin >> val1;

    cout << "Enter value for Class B: ";
    cin >> val2;

    A objA(val1);
    B objB(val2);

    compare(objA, objB);

    return 0;
}
