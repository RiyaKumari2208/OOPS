#include <iostream>
#include <new>   
using namespace std;

int main()
{
    int n;

    cout << "Enter the number of integers to allocate: ";
    cin >> n;

    try
    {
        
        int* arr = new int[n];   

        cout << "Memory allocation successful for " << n << " integers." << endl;

        for (int i = 0; i < n; i++)
        {
            arr[i] = i * 10;
            cout << arr[i] << " ";
        }
        cout << endl;

        delete[] arr; 
    }
    catch (bad_alloc& e) 
    {
        cout << "Exception caught: Memory allocation failed!" << endl;
    }

    cout << "Program continues safely." << endl;
    return 0;
}
