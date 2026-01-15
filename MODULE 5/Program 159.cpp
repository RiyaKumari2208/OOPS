#include <iostream>
#include <stdexcept> 
using namespace std;

void checkNumber(int n) {
    if (n < 0)
        throw -1; 
    else if (n == 0)
        throw runtime_error("Zero is not allowed"); 
    else
        cout << "Number is valid: " << n << endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    try {
        checkNumber(num); 
    }
    catch (int e) {
        cout << "Caught integer exception: " << e << endl;
    }
    catch (runtime_error &e) {
        cout << "Caught runtime_error exception: " << e.what() << endl;
    }

    cout << "Program continues after exception handling." << endl;
    return 0;
}
