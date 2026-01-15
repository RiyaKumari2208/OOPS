#include <iostream>
using namespace std;

class Box {
private:
    double length;
    double width;

public:
    
    Box(double l = 0, double w = 0) {
        length = l;
        width = w;
    }

    void display() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }

    Box operator + (const Box& b) {
        Box temp;
        temp.length = length + b.length;
        temp.width = width + b.width;
        return temp;
    }
};

int main() {
    Box b1(7.0, 3.0);
    Box b2(2.0, 9.0);

    cout << "Box 1: ";
    b1.display();

    cout << "Box 2: ";
    b2.display();

    Box b3 = b1 + b2; 
    cout << "Box 3 (b1 + b2): ";
    b3.display();

    return 0;
}
