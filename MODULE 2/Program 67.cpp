#include <iostream>
using namespace std;

class Complex
{
    float real;
    float image;

public:
    
    Complex(float r = 0, float i = 0)
    {
        real = r;
        image = i;
    }

    friend Complex add(Complex c1, Complex c2);

    void display()
    {
        if (image >= 0)
            cout << real << " + " << image << "i" << endl;
        else
            cout << real << " - " << -image << "i" << endl;
    }
};

Complex add(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.image = c1.image + c2.image;
    return temp;
}

int main()
{
    Complex num1(1.5, 3.5);
    Complex num2(2.5, 6.5);

    cout << "First complex number: ";
    num1.display();

    cout << "Second complex number: ";
    num2.display();

    Complex sum = add(num1, num2);

    cout << "Sum of complex numbers: ";
    sum.display();

    return 0;
}
