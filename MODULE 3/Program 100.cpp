#include <iostream>
using namespace std;

class Shape {
public:
    
    virtual void area() = 0;

    void displayMessage() {
        cout << "Calculating area of a shape." << endl;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    void area() override {
        double a = 3.14159 * radius * radius;
        cout << "Area of Circle: " << a << endl;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    void area() override {
        double a = length * width;
        cout << "Area of Rectangle: " << a << endl;
    }
};

int main() {

    Circle c(2.0);
    Rectangle r(5.0, 9.0);

    Shape* shapePtr;

    shapePtr = &c;
    shapePtr->displayMessage(); 
    shapePtr->area();           

    cout << endl;

    shapePtr = &r;
    shapePtr->displayMessage(); 
    shapePtr->area();           

    return 0;
}
