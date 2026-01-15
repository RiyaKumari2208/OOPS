#include <iostream>
#include <iomanip>   
using namespace std;

int main() {
    cout << "Formatted Student Marks Table\n\n";

    cout << left << setw(10) << "Roll"
         << setw(20) << "Name"
         << right << setw(10) << "Marks" << endl;

    cout << "--------------------------------------\n";

    int rolls[] = {101, 102, 103};
    string names[] = {"Rahul Kumar", "Priya Sharma", "Ankit Singh"};
    float marks[] = {88.567, 92.45, 76.8};

    for (int i = 0; i < 3; i++) {
        cout << left << setw(10) << rolls[i]
             << setw(20) << names[i]
             << right << setw(10) << fixed << setprecision(2) << marks[i]
             << endl;
    }

    cout << "\nDemonstrating other manipulators:\n";

    int num = 255;
    cout << "Decimal: " << dec << num << endl;
    cout << "Hexadecimal: " << hex << num << endl;
    cout << "Octal: " << oct << num << endl;

    double pi = 3.14159265;
    cout << fixed << setprecision(3);
    cout << "Pi (3 decimal places): " << pi << endl;

    return 0;
}
