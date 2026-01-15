#include <iostream>
using namespace std;

class Queue {
private:
    int front, rear, capacity;
    int arr[100]; 

public:
    
    Queue(int size = 100) {
        front = -1;
        rear = -1;
        capacity = size;
    }

    bool isEmpty() const {
        return front == -1;
    }

    bool isFull() const {
        return rear == capacity - 1;
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue Overflow! Cannot enqueue " << x << endl;
            return;
        }
        if (isEmpty()) {
            front = 0; 
        }
        arr[++rear] = x;
        cout << x << " enqueued into queue.\n";
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow! Cannot dequeue.\n";
            return;
        }
        cout << arr[front] << " dequeued from queue.\n";
        if (front == rear) {
            
            front = rear = -1;
        } else {
            front++;
        }
    }

    int peek() const {
        if (isEmpty()) {
            cout << "Queue is empty!\n";
            return -1;
        }
        return arr[front];
    }

    void display() const {
        if (isEmpty()) {
            cout << "Queue is empty!\n";
            return;
        }
        cout << "Queue elements (front to rear): ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q(5); 

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    cout << "Front element: " << q.peek() << endl;

    q.dequeue();
    q.display();

    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60); 

    q.display();

    return 0;
}
