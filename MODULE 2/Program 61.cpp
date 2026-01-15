#include <iostream>
using namespace std;

class Box {
private:
    double length;
    double width;
    double height;

public:
    
    Box(double length, double width, double height) {
    
        this->length = length;
        this->width = width;
        this->height = height;
    }

    double volume() {
        return length * width * height;
    }

    bool isSameVolume(Box &b) {
        
        return this->volume() == b.volume();
    }

    
    void display() {
        cout << "Length: " << length << ", Width: " << width << ", Height: " << height << endl;
    }
};

int main() {
    Box box1(9.0, 5.0, 1.0);
    Box box2(3.0, 6.0, 8.0);

    cout << "Box 1 dimensions: ";
    box1.display();
    cout << "Box 2 dimensions: ";
    box2.display();

    if (box1.isSameVolume(box2)) {
        cout << "Box 1 and Box 2 have the same volume." << endl;
    } else {
        cout << "Box 1 and Box 2 do NOT have the same volume." << endl;
    }

    return 0;
}
