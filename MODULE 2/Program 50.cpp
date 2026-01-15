#include <iostream>
using namespace std;

class CountObject {
public:
    static int count; 

    CountObject() {
        count++;        
    }

    static void showCount() {
        cout << "Number of objects created: " << count << endl;
    }
};

int CountObject::count = 0;

int main() {
    CountObject obj1;
    CountObject obj2;
    CountObject obj3;

    CountObject::showCount();   

    return 0;
}



























































