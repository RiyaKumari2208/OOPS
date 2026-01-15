#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file1("student.txt");
    ifstream file2("user_data.txt");
    ofstream mergedFile("merged.txt");

    if (!file1) {
        cout << "Error! file1.txt not found." << endl;
        return 0;
    }

    if (!file2) {
        cout << "Error! file2.txt not found." << endl;
        return 0;
    }

    string line;

    while (getline(file1, line)) {
        mergedFile << line << endl;
    }

    while (getline(file2, line)) {
        mergedFile << line << endl;
    }

    file1.close();
    file2.close();
    mergedFile.close();

    cout << "Files merged successfully into merged.txt\n";

    return 0;
}
