#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area(int value)  
    {
        if (value <= 0)
            throw "Base class: Invalid dimension!";
        cout << "Base class area: " << value * value << endl;
    }
    virtual ~Shape() {}  
};

class Square : public Shape
{
public:
    void area(int side) override
    {
        if (side <= 0)
            throw "Derived class (Square): Side must be positive!";
        cout << "Square area: " << side * side << endl;
    }
};

class Circle : public Shape
{
public:
    void area(int radius) override
    {
        if (radius <= 0)
            throw "Derived class (Circle): Radius must be positive!";
        cout << "Circle area: " << 3.14 * radius * radius << endl;
    }
};

int main()
{
    Shape* shapePtr = nullptr;
    int choice, value;

    try
    {
        cout << "Choose shape: 1. Square 2. Circle : ";
        cin >> choice;

        cout << "Enter dimension: ";
        cin >> value;

        if (choice == 1)
            shapePtr = new Square();
        else if (choice == 2)
            shapePtr = new Circle();
        else
            throw "Invalid choice!";

        shapePtr->area(value);

        delete shapePtr; 
    }
    catch (const char* msg)
    {
        cout << "Exception caught: " << msg << endl;
        delete shapePtr; 
    }

    cout << "Program executed safely." << endl;
    return 0;
}
