#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:

    Circle(double r) {
        radius = r;
    }

    double getArea() const {
        return 3.14 * radius * radius;
    }

    void display() const {
        cout << "Radius of circle: " << radius << endl;
        cout << "Area of circle: " << getArea() << endl;
    }
};

int main() {
    
    const Circle c1(2.0);

    cout << "Details of constant object:\n";
    
    c1.display();

    return 0;
}
