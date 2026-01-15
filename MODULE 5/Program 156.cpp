#include <iostream>
#include <stdexcept> 
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int index, divisor;

    cout << "Enter array index (0-4): ";
    cin >> index;
    cout << "Enter divisor: ";
    cin >> divisor;

    try { 
        if (index < 0 || index >= 5) {
            throw out_of_range("Invalid array index!"); 
        }

        try { 
            if (divisor == 0) {
                throw runtime_error("Division by zero!"); 
            }

            int result = arr[index] / divisor;
            cout << "Result of arr[" << index << "] / " << divisor << " = " << result << endl;
        }
        catch (runtime_error &e) { 
            cout << "Inner catch: " << e.what() << endl;
        }
    }
    catch (out_of_range &e) { 
        cout << "Outer catch: " << e.what() << endl;
    }

    cout << "Program continues after nested try-catch blocks." << endl;
    return 0;
}
