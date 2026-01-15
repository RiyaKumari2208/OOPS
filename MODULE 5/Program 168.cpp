#include <iostream>
using namespace std;

class StackOverflow : public exception
{
public:
    const char* what() const noexcept override
    {
        return "Error: Stack Overflow!";
    }
};

class StackUnderflow : public exception
{
public:
    const char* what() const noexcept override
    {
        return "Error: Stack Underflow!";
    }
};

class Stack
{
private:
    int top;
    int capacity;
    int* arr;

public:

    Stack(int size)
    {
        capacity = size;
        top = -1;
        arr = new int[capacity];
    }

    ~Stack()
    {
        delete[] arr;
    }

    void push(int x)
    {
        if (top >= capacity - 1)
            throw StackOverflow();
        arr[++top] = x;
        cout << "Pushed: " << x << endl;
    }

    int pop()
    {
        if (top < 0)
            throw StackUnderflow();
        int val = arr[top--];
        cout << "Popped: " << val << endl;
        return val;
    }

    void display()
    {
        if (top < 0)
        {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main()
{
    Stack s(3); 

    try
    {
        s.push(10);
        s.push(20);
        s.push(30);

        s.push(40);
    }
    catch (StackOverflow& e)
    {
        cout << e.what() << endl;
    }

    s.display();

    try
    {
        s.pop();
        s.pop();
        s.pop();

        s.pop();
    }
    catch (StackUnderflow& e)
    {
        cout << e.what() << endl;
    }

    s.display();

    cout << "Program executed safely." << endl;
    return 0;
}
