#include <iostream>
#include <fstream>  // Required for file operations
using namespace std;

int main() {
    ofstream file;  

    file.open("example.txt");

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;  
    }

    file << "Hello, this is a sample file.\n";
    file << "C++ file handling is easy!\n";

    cout << "File 'example.txt' created and data written successfully." << endl;

    file.close();

    return 0;
}
