#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    try {
        if (name.empty()) {
            throw string("Name cannot be empty!"); 
        }
        cout << "Hello, " << name << "!" << endl;
    }
    catch (string &e) { 
        cout << "Exception caught: " << e << endl;
    }

    cout << "Program continues after try-catch block." << endl;
    return 0;
}
