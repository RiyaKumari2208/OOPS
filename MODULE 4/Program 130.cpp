#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename;
    cout << "Enter the file name (with extension): ";
    cin >> filename;

    ofstream outfile(filename, ios::app); 

    if (!outfile) {
        cerr << "Error: Cannot open file '" << filename << "'!" << endl;
        return 1;
    }

    cin.ignore();  

    string data;
    cout << "Enter data to append to the file: ";
    getline(cin, data);  

    outfile << data << endl;  

    cout << "\nData appended successfully to '" << filename << "'." << endl;

    outfile.close();  

    return 0;
}
