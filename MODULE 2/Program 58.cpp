#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* arr;
    int size;

public:

    DynamicArray(int n) {
        size = n;
        arr = new int[size];  
        cout << "Constructor called. Memory allocated for " << size << " elements." << endl;

        for (int i = 0; i < size; i++) {
            arr[i] = i + 1;
        }
    }

    void display() {
        cout << "Array elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~DynamicArray() {
        delete[] arr;
        cout << "Destructor called. Memory freed." << endl;
    }
};

int main() {
    cout << "Creating object with dynamic array" << endl;
    DynamicArray obj(5);   
    obj.display();

    cout << "End of main function" << endl;
    return 0;
}
