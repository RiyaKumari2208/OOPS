#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream original("student.txt");
    if (!original) {
        cout << "Error! input.txt not found." << endl;
        return 0;
    }

    string line;
    int totalLines = 0;
    while (getline(original, line)) {
        totalLines++;
    }

    original.clear();
    original.seekg(0, ios::beg);

    ofstream file1("part1.txt");
    ofstream file2("part2.txt");

    int lineCount = 0;
    int mid = totalLines / 2;  

    while (getline(original, line)) {
        lineCount++;
        if (lineCount <= mid) {
            file1 << line << endl;
        } else {
            file2 << line << endl;
        }
    }

    original.close();
    file1.close();
    file2.close();

    cout << "File split successfully into part1.txt and part2.txt\n";

    return 0;
}
