#include <iostream>
using namespace std;

void divide(int a, int b)
{
    cout << "Inside divide()" << endl;

    if (b == 0)
    {
        throw "Division by zero error!";
    }

    cout << "Result: " << a / b << endl;
}

void calculate()
{
    cout << "Inside calculate()" << endl;
    divide(10, 0);   
    cout << "This line will NOT execute" << endl;
}

int main()
{
    cout << "Inside main()" << endl;

    try
    {
        calculate(); 
    }
    catch (const char* msg)
    {
        cout << "Exception caught in main(): " << msg << endl;
    }

    cout << "Program continues after exception handling." << endl;
    return 0;
}
