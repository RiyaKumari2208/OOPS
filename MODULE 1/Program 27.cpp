#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    cout << "Enter number: ";
    cin >> n;

    while (i <= 10) {
        cout << n << " x " << i << " = " << n * i << endl;
        i++;
    }

    return 0;
}