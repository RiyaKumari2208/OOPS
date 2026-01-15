#include <iostream>
using namespace std;

class Stack {
private:
    int top;        
    int arr[100];   
    int capacity;   

public:
    
    Stack(int size = 100) {
        top = -1;
        capacity = size;
    }

    bool isEmpty() const {
        return top == -1;
    }

    bool isFull() const {
        return top == capacity - 1;
    }

    void push(int x) {
        if (isFull()) {
            cout << "Stack Overflow! Cannot push " << x << endl;
            return;
        }
        arr[++top] = x;
        cout << x << " pushed into stack.\n";
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Cannot pop.\n";
            return;
        }
        cout << arr[top--] << " popped from stack.\n";
    }

    int peek() const {
        if (isEmpty()) {
            cout << "Stack is empty!\n";
            return -1; 
        }
        return arr[top];
    }

    void display() const {
        if (isEmpty()) {
            cout << "Stack is empty!\n";
            return;
        }
        cout << "Stack elements (top to bottom): ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s(5); 

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    cout << "Top element: " << s.peek() << endl;

    s.pop();
    s.display();

    s.push(40);
    s.push(50);
    s.push(60); 

    s.display();

    return 0;
}
