#include <iostream>
using namespace std;

class Area {
public:
    int side;

    void input() {
        cout << "Enter side: ";
        cin >> side;
        
    }

    void calculate() {
        int area = side * side;
        cout << "Area of square is: " << area;
    }
};

int main() {
    Area obj;
    obj.input();
    obj.calculate();
    return 0;
}
