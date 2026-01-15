#include <iostream>
using namespace std;

int main() {
    int n, a[50];
    cout << "Enter number of elements: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Array elements are: ";
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}