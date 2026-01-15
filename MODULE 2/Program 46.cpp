#include <iostream>
using namespace std;


class Number {
private:
    int value; 

public:
    
    void setValue(int v) {
        value = v;
    }

    int getValue() {
        return value;
    }

    void compare(Number obj) {
        if (value > obj.value) {
            cout << value << " is greater than " << obj.value << endl;
        } else if (value < obj.value) {
            cout << value << " is smaller than " << obj.value << endl;
        } else {
            cout << value << " is equal to " << obj.value << endl;
        }
    }
};

int main() {
    Number num1, num2; 

    int val1, val2;

    cout << "Enter value for first object: ";
    cin >> val1;
    num1.setValue(val1);

    cout << "Enter value for second object: ";
    cin >> val2;
    num2.setValue(val2);

    num1.compare(num2);

    return 0;
}
