#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("data.txt");

    if (file) {
        cout << "File exists." << endl;
        file.close();
    } else {
        cout << "File does not exist." << endl;
    }

    return 0;
}
