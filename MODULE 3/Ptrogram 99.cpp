#include <iostream>
using namespace std;

class Shape {
public:
    
    virtual void display() {
        cout << "This is a generic shape." << endl;
    }
};

class Circle : public Shape {
public:
    void display() override {
        cout << "This is a circle." << endl;
    }
};

class Rectangle : public Shape {
public:
    void display() override {
        cout << "This is a rectangle." << endl;
    }
};

int main() {
    Shape* shapePtr; 

    Circle c;
    Rectangle r;

    shapePtr = &c;
    shapePtr->display(); 

    shapePtr = &r;
    shapePtr->display(); 

    return 0;
}
