#include <iostream>
using namespace std;

class Box2;

class Box1 {
private:
    double length;

public:
    
    Box1(double l) {
        length = l;
    }


    friend double sumLengths(Box1 b1, Box2 b2);
};

class Box2 {
private:
    double width;

public:

    Box2(double w) {
        width = w;
    }


    friend double sumLengths(Box1 b1, Box2 b2);
};


double sumLengths(Box1 b1, Box2 b2) {
    
    return b1.length + b2.width;
}

int main() {
    Box1 box1(5.0);
    Box2 box2(3.0);

    cout << "Sum of Box1 length and Box2 width: " << sumLengths(box1, box2) << endl;

    return 0;
}
