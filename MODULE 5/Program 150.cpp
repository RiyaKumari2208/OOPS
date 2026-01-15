#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Select exception to throw:\n";
    cout << "1. Integer\n2. Float\n3. String\n4. No exception\n";
    int choice;
    cin >> choice;

    try {
        if (choice == 1) {
            throw 42;                     
        }
        else if (choice == 2) {
            throw 3.14f;                  
        }
        else if (choice == 3) {
            throw string("String exception"); 
        }
        else if (choice == 4) {
            cout << "No exception thrown.\n";
        }
        else {
            throw "Unknown choice!";      
        }
    }
    catch (...) { 
        cout << "An exception was caught!" << endl;
    }

    cout << "Program continues after catch(...)." << endl;
    return 0;
}
