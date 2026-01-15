#include <iostream>
#include <fstream>
#include <string>   
using namespace std;

int main()
{
    try
    {
        
        ofstream outFile;
        outFile.exceptions(ofstream::failbit | ofstream::badbit);
        outFile.open("data.txt");

        outFile << "Welcome to Advanced C++ Exception Handling" << endl;
        outFile << "This file operation is safe using exceptions." << endl;
        outFile.close();

        cout << "File written successfully." << endl;

        ifstream inFile;
        inFile.exceptions(ifstream::failbit | ifstream::badbit);
        inFile.open("data.txt");

        string line;
        cout << "\nReading from file:" << endl;

        while (getline(inFile, line))   
        {
            cout << line << endl;
        }

        inFile.close();
    }
    catch (const ios_base::failure& e)
    {
        cout << "File operation error occurred!" << endl;
    }

    cout << "\nProgram executed safely." << endl;
    return 0;
}
