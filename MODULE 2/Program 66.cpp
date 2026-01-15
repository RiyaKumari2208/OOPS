#include <iostream>
using namespace std;

class Number
{
    int value;  

public:
    
    Number(int v = 0)
    {
        value = v;
    }

    friend Number operator+(Number n1, Number n2);

    void display()
    {
        cout << "Value: " << value << endl;
    }
};

Number operator+(Number n1, Number n2)
{
    Number temp;
    temp.value = n1.value + n2.value;
    return temp;
}

int main()
{
    Number num1(20);
    Number num2(50);

    Number sum = num1 + num2;  

    cout << "First number: ";
    num1.display();

    cout << "Second number: ";
    num2.display();

    cout << "Sum: ";
    sum.display();

    return 0;
}
