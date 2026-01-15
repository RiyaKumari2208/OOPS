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

    friend void swapValues(A &a, B &b);

    void display() {
        cout << "Value in Class A: " << valueA << endl;
    }
};

class B {
private:
    int valueB; 

public:
    
    B(int val) {
        valueB = val;
    }

    friend void swapValues(A &a, B &b);

    void display() {
        cout << "Value in Class B: " << valueB << endl;
    }
};

void swapValues(A &a, B &b) {
    int temp = a.valueA;
    a.valueA = b.valueB;
    b.valueB = temp;
}

int main() {
    int val1, val2;

    cout << "Enter value for Class A: ";
    cin >> val1;

    cout << "Enter value for Class B: ";
    cin >> val2;

    A objA(val1);
    B objB(val2);

    cout << "\nBefore swapping:\n";
    objA.display();
    objB.display();

    swapValues(objA, objB);

    cout << "\nAfter swapping:\n";
    objA.display();
    objB.display();

    return 0;
}
