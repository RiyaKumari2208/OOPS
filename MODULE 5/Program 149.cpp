#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Select exception to throw:\n";
    cout << "1. Integer\n2. Float\n3. String\n";
    int choice;
    cin >> choice;

    try {
        if (choice == 1) {
            throw 100;               
        }
        else if (choice == 2) {
            throw 3.14f;             
        }
        else if (choice == 3) {
            throw string("Custom string exception!"); 
        }
        else {
            cout << "No exception thrown.\n";
        }
    }
    catch (int e) {
        cout << "Caught integer exception: " << e << endl;
    }
    catch (float e) {
        cout << "Caught float exception: " << e << endl;
    }
    catch (string &e) {
        cout << "Caught string exception: " << e << endl;
    }

    cout << "Program continues after try-catch blocks." << endl;
    return 0;
}
