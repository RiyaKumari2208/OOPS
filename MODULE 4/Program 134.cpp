#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin("user_data.txt");
    string line;

    if (!fin) {
        cout << "File not found!" << endl;
        return 0;
    }

    cout << "File contents:\n";

    while (getline(fin, line)) {
        cout << line << endl;
    }

    fin.close();
    return 0;
}
