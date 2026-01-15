#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;

    cout << "Enter a full sentence: ";
    
    getline(cin, sentence);

    cout << "\nYou entered: " << sentence << endl;

    return 0;
}
