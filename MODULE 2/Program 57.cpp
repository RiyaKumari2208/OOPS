#include <iostream>
using namespace std;

class Demo {
public:
    int id;

    Demo(int value) {
        id = value;
        cout << "Constructor called for object with id: " << id << endl;
    }

    void display() {
        cout << "Object id: " << id << endl;
    }
};

int main() {
    cout << "Start of main function" << endl;

    cout << "\nCreating obj1" << endl;
    Demo obj1(1);   
    obj1.display();

    cout << "\nCreating obj2" << endl;
    Demo obj2(2);   
    obj2.display();

    cout << "\nCreating obj3" << endl;
    Demo obj3(3);   
    obj3.display();

    cout << "\nEnd of main function" << endl;
    return 0;
}
