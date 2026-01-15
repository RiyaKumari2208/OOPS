#include <iostream>
using namespace std;

class BoxInfo;

class Box {
private:
    double length;
    double width;
    double height;

public:
    
    Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }

    friend class BoxInfo;
};

class BoxInfo {
public:
    
    void showVolume(Box b) {
        double volume = b.length * b.width * b.height; 
        cout << "Volume of the box: " << volume << endl;
    }
};

int main() {
    Box box1(6.0, 4.0, 1.0);  
    BoxInfo info;             

    info.showVolume(box1);

    return 0;
}
