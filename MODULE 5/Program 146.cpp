#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers (a and b): ";
    cin >> a >> b;

    try {
        if (b == 0) {
            throw "Division by zero is not allowed!";
        }
        int result = a / b;
        cout << "Result: " << result << endl;
    }
    catch (const char* msg) {
        cout << "Exception caught: " << msg << endl;
    }

    cout << "Program continues after try-catch block." << endl;
    return 0;
}
