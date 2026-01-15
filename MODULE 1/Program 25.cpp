#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter a number (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1: cout << "one"; break;
        case 2: cout << "Two"; break;
        case 3: cout << "Three"; break;
        default: cout << "Invalid choice";
    }
    return 0;
    
}