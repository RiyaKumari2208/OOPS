#include <iostream>
using namespace std;

int main() {
    char str1[200], str2[200];
    int i = 0;

    cout << "Enter a string: ";
    cin.getline(str1, 200);

    
    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';

    cout << "Original string: " << str1 << endl;
    cout << "Copied string: " << str2 << endl;

    return 0;
}
