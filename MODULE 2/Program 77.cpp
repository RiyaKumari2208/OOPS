#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head; 

public:
    
    LinkedList() {
        head = nullptr;
    }

    void insert(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cout << value << " inserted into linked list.\n";
    }

    void remove(int value) {
        if (head == nullptr) {
            cout << "List is empty! Cannot delete " << value << endl;
            return;
        }

        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << value << " deleted from linked list.\n";
            return;
        }

        Node* current = head;
        Node* prev = nullptr;
        while (current != nullptr && current->data != value) {
            prev = current;
            current = current->next;
        }

        if (current == nullptr) {
            cout << value << " not found in the list.\n";
        } else {
            prev->next = current->next;
            delete current;
            cout << value << " deleted from linked list.\n";
        }
    }

    void display() const {
        if (head == nullptr) {
            cout << "Linked list is empty.\n";
            return;
        }

        Node* temp = head;
        cout << "Linked list elements: ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);

    list.display();

    list.remove(20);
    list.display();

    list.remove(50); 

    return 0;
}
