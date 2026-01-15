#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    
    Student(string name, int age) {
        
        this->name = name;  
        this->age = age;    
    }

    
    void display() {
        cout << "Name: " << this->name << endl;  
        cout << "Age: " << this->age << endl;
    }

    void updateAge(int age) {
        cout << "Local variable age: " << age << endl;
        cout << "Member variable age before update: " << this->age << endl;

        this->age = age;  
        cout << "Member variable age after update: " << this->age << endl;
    }
};

int main() {
    
    Student s1("Alice", 20);

    cout << "Initial student details:" << endl;
    s1.display();

    cout << "\nUpdating age using local variable:" << endl;
    s1.updateAge(25);

    cout << "\nUpdated student details:" << endl;
    s1.display();

    return 0;
}
