#include <iostream>
using namespace std;

class Demo {
public:
    
    Demo() {
        cout << "Default constructor is called" << endl;
    }

    void show() {
        cout << "This is a member function" << endl;
    }
};

int main() {
    Demo obj;  
    obj.show();
    return 0;
}
