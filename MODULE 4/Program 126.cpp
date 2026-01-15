#include <iostream>
#include <fstream>  // Required for file operations
#include <string>
using namespace std;

int main() {
    ofstream outfile("user_data.txt"); 

    if (!outfile) {
        cout << "Error creating file!" << endl;
        return 1;
    }

    string name;
    int age;

    cout << "Enter your name: ";
    getline(cin, name);  

    cout << "Enter your age: ";
    cin >> age;

    outfile << "User Details:\n";
    outfile << "Name: " << name << "\n";
    outfile << "Age: " << age << "\n";

    cout << "\nData written to file 'user_data.txt' successfully." << endl;

    outfile.close();  

    return 0;
}
