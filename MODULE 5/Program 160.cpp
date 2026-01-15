#include <iostream>
using namespace std;

class MyException
{
public:
    virtual const char* what()
    {
        return "Base Exception Occurred";
    }
};

class DivideByZeroException : public MyException
{
public:
    const char* what()
    {
        return "Divide By Zero Exception";
    }
};

class NegativeNumberException : public MyException
{
public:
    const char* what()
    {
        return "Negative Number Exception";
    }
};

void calculate(int a, int b)
{
    if (b == 0)
        throw DivideByZeroException();
    if (a < 0 || b < 0)
        throw NegativeNumberException();

    cout << "Result: " << a / b << endl;
}

int main()
{
    try
    {
        calculate(10, 0);   
    }
    catch (DivideByZeroException e)
    {
        cout << "Caught: " << e.what() << endl;
    }
    catch (NegativeNumberException e)
    {
        cout << "Caught: " << e.what() << endl;
    }
    catch (MyException e)
    {
        cout << "Caught: " << e.what() << endl;
    }

    cout << "Program continues normally." << endl;
    return 0;
}
