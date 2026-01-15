#include <iostream>
using namespace std;

class Calculator
{
public:
    
    virtual void divide(int a, int b)
    {
        if (b == 0)
            throw "Base class: Division by zero error!";
        cout << "Base class division result: " << a / b << endl;
    }
};

class AdvancedCalculator : public Calculator
{
public:
    
    void divide(int a, int b) override
    {
        if (b == 0)
            throw "Derived class: Division by zero error!";
        if (b < 0)
            throw "Derived class: Negative divisor not allowed!";
        cout << "Derived class division result: " << a / b << endl;
    }
};

int main()
{
    Calculator* calc;          
    AdvancedCalculator advCalc;

    calc = &advCalc;           

    int num = 20, denom;

    try
    {
        cout << "Enter a number to divide by: ";
        cin >> denom;

        calc->divide(num, denom);  
    }
    catch (const char* msg)
    {
        cout << "Exception caught: " << msg << endl;
    }

    cout << "Program continues safely." << endl;
    return 0;
}
