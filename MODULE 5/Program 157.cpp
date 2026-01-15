#include <iostream>
#include <stdexcept> 
using namespace std;

class Test {
    int value;
public:
    Test(int v) {
        if (v < 0) {
            throw invalid_argument("Negative value not allowed in constructor!");
        }
        value = v;
        cout << "Constructor called. Value = " << value << endl;
    }
    void display() {
        cout << "Value = " << value << endl;
    }
};

int main() {
    try {
        cout << "Creating object with value 10...\n";
        Test t1(10); 
        t1.display();

        cout << "Creating object with value -5...\n";
        Test t2(-5); 
        t2.display(); 
    }
    catch (invalid_argument &e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    cout << "Program continues after handling constructor exceptions." << endl;
    return 0;
}
