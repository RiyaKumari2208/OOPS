#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    
    cout << "This is an output using ostream (cout)" << endl;

    int num;
    cout << "Enter a number (istream - cin): ";
    cin >> num;
    cout << "You entered: " << num << endl;

    cout << "\nDemonstrating iostream with string input/output:\n";
    string name;
    cout << "Enter your name: ";
    cin.ignore();  
    getline(cin, name);
    cout << "Hello, " << name << "!" << endl;

    ofstream fout("example.txt");
    if (!fout) {
        cout << "Error opening file for writing.\n";
    } else {
        fout << "Number: " << num << endl;
        fout << "Name: " << name << endl;
        fout.close();
        cout << "Data written to example.txt using ofstream\n";
    }

    ifstream fin("example.txt");
    if (!fin) {
        cout << "Error opening file for reading.\n";
    } else {
        cout << "\nReading from file using ifstream:\n";
        string line;
        while (getline(fin, line)) {
            cout << line << endl;
        }
        fin.close();
    }

    return 0;
}
