#include <iostream>
using namespace std;

class Rectangle {
public:
    int length, breadth;

    Rectangle() {
        length = 0;
        breadth = 0;
        cout << "Default constructor called" << endl;
    }

    Rectangle(int side) {
        length = breadth = side;
        cout << "One-parameter constructor called (square)" << endl;
    }

    Rectangle(int l, int b) {
        length = l;
        breadth = b;
        cout << "Two-parameter constructor called (rectangle)" << endl;
    }

    void displayArea() {
        cout << "Area: " << length * breadth << endl;
    }
};

int main() {
    Rectangle r1;        
    r1.displayArea();

    Rectangle r2(10);     
    r2.displayArea();

    Rectangle r3(5, 9);  
    r3.displayArea();

    return 0;
}
