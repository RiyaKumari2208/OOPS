#include <iostream>
using namespace std;

class Largest {
public:
    int a, b;

    void input() {
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
    }

    void displayLargest() {
        if (a > b)
            cout << "Largest number is: " << a;
        else if (b > a)
            cout << "Largest number is: " << b;
        else
            cout << "Both numbers are equal";
    }
};

int main() {
    Largest obj;
    obj.input();
    obj.displayLargest();
    return 0;
}
