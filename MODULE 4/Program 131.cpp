#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    
    ofstream fout("student.txt", ios::out);
    fout << "Name: Rahul Kumar\n";
    fout << "Age: 21\n";
    fout.close();

    ofstream fapp("student.txt", ios::app);
    fapp << "Course: C++ Programming\n";
    fapp.close();

    ifstream fin("student.txt", ios::in);
    string line;

    cout << "File contents:\n";
    while (getline(fin, line)) {
        cout << line << endl;
    }
    fin.close();

    return 0;
}
