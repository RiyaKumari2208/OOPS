#include <iostream>
using namespace std;

class Outer {
public:
    int a = 10;

    class Inner {
    public:
        int b = 30;

        void displayInner() {
            cout << "Value of b (Inner class): " << b << endl;
        }
    };

    void displayOuter() {
        cout << "Value of a (Outer class): " << a << endl;
    }
};

int main() {
    Outer obj1;                
    Outer::Inner obj2;          

    obj1.displayOuter();
    obj2.displayInner();

    return 0;
}
