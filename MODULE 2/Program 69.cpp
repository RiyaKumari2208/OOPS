#include <iostream>
using namespace std;

class B; 

class A
{
    int a;

public:
    A(int x) { a = x; }

    friend class B;
};

class B
{
    int b;

public:
    B(int y) { b = y; }

    void showA(A obj)
    {
        cout << "Accessing A's private member from B: " << obj.a << endl;
    }

    void showB(B obj)
    {
        cout << "Accessing B's private member from B: " << obj.b << endl;
    }
};

class C
{
public:
    void showA(A obj)
    {
        
    
        cout << "C cannot access A's private member (friendship is not mutual)" << endl;
    }
};

int main()
{
    A objA(15);
    B objB(30);
    C objC;

    objB.showA(objA); 
    objB.showB(objB); 
    objC.showA(objA); 

    return 0;
}
