#include <iostream>
#include <string>
using namespace std;

class MyException {
    string message;
public:
    MyException(string msg) : message(msg) {}
    string getMessage() const {
        return message;
    }
};

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    try {
        if (age < 0 || age > 120) {
            throw MyException("Invalid age! Age must be between 0 and 120.");
        }
        cout << "Your age is: " << age << endl;
    }
    catch (MyException &e) {
        cout << "Exception caught: " << e.getMessage() << endl;
    }

    cout << "Program continues after try-catch block.\n";
    return 0;
}
