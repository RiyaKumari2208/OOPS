#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string sourceFile, destFile;
    
    cout << "Enter source file name (with extension): ";
    cin >> sourceFile;

    cout << "Enter destination file name (with extension): ";
    cin >> destFile;

    ifstream infile(sourceFile);
    if (!infile) {
        cerr << "Error: Cannot open source file '" << sourceFile << "'!" << endl;
        return 1;
    }

    ofstream outfile(destFile);
    if (!outfile) {
        cerr << "Error: Cannot create destination file '" << destFile << "'!" << endl;
        infile.close();
        return 1;
    }

    string line;
    while (getline(infile, line)) {  
        outfile << line << endl;     
    }

    cout << "\nContent successfully copied from '" << sourceFile 
         << "' to '" << destFile << "'." << endl;

    infile.close();
    outfile.close();

    return 0;
}
