#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string data = "10 20 30 40 50";
    stringstream ss(data);

    int num, sum = 0;

    while (ss >> num) {
        sum += num;
    }

    cout << "String data: " << data << endl;
    cout << "Sum of numbers: " << sum << endl;

    return 0;
}
