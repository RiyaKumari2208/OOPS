#include <iostream>
#include <string>
using namespace std;

class Demo {
private:
    string name;

public:
    
    Demo(string n) {
        name = n;
        cout << "Constructor called for: " << name << endl;
    }

    void showMessage() {
        cout << "Hello from object: " << name << endl;
    }

    ~Demo() {
        cout << "Destructor called for: " << name << endl;
    }
};

int main() {
    cout << "Program started" << endl;

    cout << "\n--- Creating object d1 ---" << endl;
    Demo d1("Object1");  

    d1.showMessage();    

    cout << "\n--- Creating object d2 in inner block ---" << endl;
    {
        Demo d2("Object2");  
        d2.showMessage();
        cout << "End of inner block" << endl;
    }   

    cout << "\nBack to main scope" << endl;

    cout << "\n--- Creating dynamic object d3 ---" << endl;
    Demo* d3 = new Demo("Object3");  
    d3->showMessage();

    delete d3;  

    cout << "\nProgram ended" << endl;

    return 0;
}
