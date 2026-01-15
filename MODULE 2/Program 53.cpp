#include <iostream>
using namespace std;

class Sample{
public:
    int a, b;

    Sample() {
        a = 0;
        b = 0;
        cout << "Default constructor called" << endl;
    }

    Sample(int x) {
        a = x;
        b = 0;
        cout << "One-parameter constructor called" << endl;
    }
    Sample(int x, int y) {
        a = x;
        b = y;
        cout << "Two-parameter constructor called" << endl;
    }

    void display() {
        cout << "x = " << a  << ", y = " << b << endl;
    }
};

int main() {
    Sample obj1;          
    obj1.display();

    Sample obj2(5);       
    obj2.display();

    Sample obj3(10, 20);  
    obj3.display();

    return 0;
}
