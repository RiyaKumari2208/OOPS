#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    ch = cin.get();  
    cout << "You entered: ";
    cout.put(ch);    
    cout << endl;

    cin.ignore();  

    cout << "\nEnter a sentence (press Enter to finish): " << endl;

    while ((ch = cin.get()) != '\n') {  
        cout.put(ch);  
    }

    cout << "\nEnd of sentence." << endl;

    return 0;
}
