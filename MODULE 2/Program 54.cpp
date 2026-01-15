#include <iostream>
using namespace std;

class CopyDemo {
public:
    int x;

    CopyDemo(int a) {
        x = a;
    }

    CopyDemo(CopyDemo &obj) {
        x = obj.x;
        cout << "Copy constructor called" << endl;
    }

    void display() {
        cout << "Value of x: " << x << endl;
    }
};

int main() {
    CopyDemo obj1(20);   
    CopyDemo obj2 = obj1; 

    obj1.display();
    obj2.display();

    return 0;
}
