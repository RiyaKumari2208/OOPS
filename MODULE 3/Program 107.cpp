#include <iostream>
using namespace std;

class Shape {
public:
    
    virtual void area() = 0;

    virtual void perimeter() = 0;

    virtual ~Shape() {
        cout << "Shape destructor called" << endl;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    void inputData() {
        cout << "Enter length of rectangle: ";
        cin >> length;
        cout << "Enter width of rectangle: ";
        cin >> width;
    }

    void area() override {
        cout << "Rectangle Area: " << (length * width) << endl;
    }

    void perimeter() override {
        cout << "Rectangle Perimeter: " << 2 * (length + width) << endl;
    }

    ~Rectangle() {
        cout << "Rectangle destructor called" << endl;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    void inputData() {
        cout << "Enter radius of circle: ";
        cin >> radius;
    }

    void area() override {
        cout << "Circle Area: " << (3.14159 * radius * radius) << endl;
    }

    void perimeter() override {
        cout << "Circle Perimeter (Circumference): " << (2 * 3.14159 * radius) << endl;
    }

    ~Circle() {
        cout << "Circle destructor called" << endl;
    }
};

int main() {
    Shape* shapePtr;

    Rectangle r;
    r.inputData();
    shapePtr = &r;
    shapePtr->area();
    shapePtr->perimeter();

    cout << endl;

    Circle c;
    c.inputData();
    shapePtr = &c;
    shapePtr->area();
    shapePtr->perimeter();

    return 0;
}
