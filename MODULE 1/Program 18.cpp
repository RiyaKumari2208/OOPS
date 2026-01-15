#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter values of a and b: ";
    cin >> a >> b;

    int result = (a * a) + (b * b) + (2 * a * b);
    cout << "Result = " << result;

    return 0;
}