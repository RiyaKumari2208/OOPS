#include <iostream>
using namespace std;

class Rectangle {
public:
    int length;
    int width;

    void setValues(int l, int w) {
        length = l;
        width = w;
    }

    int area() {
        return length * width;
    }

    void display() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area of Rectangle: " << area() << endl;
    }
};

int main() {
    
    Rectangle r;

    
    r.setValues(9, 5);
    r.display();

    return 0;
}
