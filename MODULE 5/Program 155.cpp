#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int index;

    cout << "Enter index to access array (0-4): ";
    cin >> index;

    try {
        if (index < 0 || index >= 5) {
            throw index; 
        }

        cout << "Value at arr[" << index << "] = " << arr[index] << endl;
    }
    catch (int e) {
        cout << "Exception caught! Invalid array index: " << e << endl;
    }

    cout << "Program continues after try-catch block." << endl;
    return 0;
}
