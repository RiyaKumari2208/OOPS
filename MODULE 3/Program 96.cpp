#include <iostream>
using namespace std;

class Calculator {
public:
    
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;

    cout << "Addition of 2 integers: " << calc.add(30, 50) << endl;
    cout << "Addition of 3 integers: " << calc.add(15, 25, 75) << endl;
    cout << "Addition of 2 doubles: " << calc.add(10.7, 70.3) << endl;

    return 0;
}
