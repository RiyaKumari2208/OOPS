#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename;
    cout << "Enter the file name (with extension): ";
    cin >> filename;

    ifstream infile(filename); 

    if (!infile) {
        cerr << "Error: Cannot open file '" << filename << "'!" << endl;
        return 1;
    }

    string word;
    int wordCount = 0;

    while (infile >> word) {
        wordCount++;
    }

    cout << "Total number of words in '" << filename << "' is: " << wordCount << endl;

    infile.close(); 

    return 0;
}
