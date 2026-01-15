#include <iostream>
using namespace std;

int main()
{
    int age;

    try
    {
        cout << "Enter your age: ";
        cin >> age;

        if (cin.fail())
        {
            throw "Invalid input! Please enter a number.";
        }

        if (age <= 0)
        {
            throw "Age must be a positive number.";
        }

        cout << "Valid age entered: " << age << endl;
    }
    catch (const char* msg)
    {
        cout << "Error: " << msg << endl;
    }

    cout << "Program ended safely." << endl;
    return 0;
}
