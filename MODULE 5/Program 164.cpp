#include <iostream>
using namespace std;

int main()
{
    int a, b;

    try
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;

        if (cin.fail())
        {
            throw 'a';   
        }

        if (b == 0)
        {
            throw 0;     
        }

        double result = static_cast<double>(a) / b;
        cout << "Result: " << result << endl;
    }
    catch (int)
    {
        cout << "Error: Division by zero is not allowed." << endl;
    }
    catch (char)
    {
        cout << "Error: Invalid input! Please enter numbers only." << endl;
    }
    catch (...)
    {
        cout << "Error: Unknown exception occurred." << endl;
    }

    cout << "Program completed safely." << endl;
    return 0;
}
