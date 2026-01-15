#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    double getArea() const {
        
        return length * width;
    }

    void display() const {
        cout << "Length: " << length << ", Width: " << width << endl;
        cout << "Area: " << getArea() << endl;
    }

    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }
};

int main() {
    Rectangle r1(4.0, 2.0);

    cout << "Initial rectangle details:\n";
    r1.display();

    r1.setDimensions(9.0, 5.0);

    cout << "\nAfter modifying dimensions:\n";
    r1.display();

    return 0;
}
