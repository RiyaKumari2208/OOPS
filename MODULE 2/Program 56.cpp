#include <iostream>
using namespace std;

class Demo {
public:
    int id;

    Demo(int value) {
        id = value;
        cout << "Constructor called for object with id: " << id << endl;
    }

    ~Demo() {
        cout << "Destructor called for object with id: " << id << endl;
    }

    void display() {
        cout << "Object id: " << id << endl;
    }
};

int main() {
    cout << "Entering main function" << endl;

    cout << "\nCreating obj1" << endl;
    Demo obj1(100);
    obj1.display();

    cout << "\nCreating obj2" << endl;
    Demo obj2(205);
    obj2.display();

    cout << "\nEnd of main function" << endl;
    return 0;
}
