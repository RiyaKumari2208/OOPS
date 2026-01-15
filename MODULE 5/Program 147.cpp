#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    try {
        if (num < 0) {
            throw num; 
        }
        cout << "You entered a positive number: " << num << endl;
    }
    catch (int e) {
        cout << "Exception caught! Negative number entered: " << e << endl;
    }

    cout << "Program continues after try-catch block." << endl;
    return 0;
}
