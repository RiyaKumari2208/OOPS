#include <iostream>
using namespace std;

void functionB() {
    try {
        cout << "Inside functionB: Throwing exception...\n";
        throw 70; 
    }
    catch (int e) {
        cout << "functionB caught exception: " << e << endl;
        cout << "Rethrowing exception to main...\n";
        throw; 
    }
}

int main() {
    try {
        cout << "Inside main: Calling functionB...\n";
        functionB(); 
    }
    catch (int e) {
        cout << "Exception caught in main: " << e << endl;
    }

    cout << "Program continues after try-catch blocks.\n";
    return 0;
}
