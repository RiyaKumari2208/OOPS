#include <iostream>
using namespace std;

int main() {
    int num = 50;
    int *ptr;

    
    ptr = &num;

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;

    
    cout << "Value using pointer (*ptr): " << *ptr << endl;
    cout << "Address stored in pointer (ptr): " << ptr << endl;


    *ptr = 65;

    cout << "Updated value of num: " << num << endl;

    return 0;
}
