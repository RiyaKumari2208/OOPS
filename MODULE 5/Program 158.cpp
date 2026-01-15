#include <iostream>
#include <new> 
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    try {
        
        int* arr = new int[size];

        cout << "Memory allocation successful for array of size " << size << endl;

        for (int i = 0; i < size; i++)
            arr[i] = i + 1;

        cout << "First 5 elements: ";
        for (int i = 0; i < 5 && i < size; i++)
            cout << arr[i] << " ";
        cout << endl;

        delete[] arr; 
    }
    catch (bad_alloc &e) { 
        cout << "Exception caught: " << e.what() << endl;
    }

    cout << "Program continues after memory allocation attempt." << endl;
    return 0;
}
