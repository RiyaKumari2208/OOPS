#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream infile("user_data.txt"); 

    if (!infile) {  
        cout << "Error opening file!" << endl;
        return 1;
    }

    string line;

    cout << "Contents of 'user_data.txt':\n";

    while (getline(infile, line)) {
        cout << line << endl;
    }

    infile.close();  

    return 0;
}
