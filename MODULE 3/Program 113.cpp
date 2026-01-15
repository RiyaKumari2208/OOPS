#include <iostream>
using namespace std;

class Library
{
private:
    int bookId;
    string bookName;
    string authorName;
    bool isIssued;

public:
    
    void addBook()
    {
        cout << "Enter Book ID: ";
        cin >> bookId;

        cout << "Enter Book Name: ";
        cin >> bookName;

        cout << "Enter Author Name: ";
        cin >> authorName;

        isIssued = false;
    }

    void issueBook()
    {
        if (!isIssued)
        {
            cout << "Book issued successfully.\n";
            isIssued = true;
        }
        else
        {
            cout << "Book is already issued.\n";
        }
    }

    void returnBook()
    {
        if (isIssued)
        {
            cout << "Book returned successfully.\n";
            isIssued = false;
        }
        else
        {
            cout << "Book was not issued.\n";
        }
    }

    void displayBook()
    {
        cout << "\n--- Book Details ---\n";
        cout << "Book ID: " << bookId << endl;
        cout << "Book Name: " << bookName << endl;
        cout << "Author Name: " << authorName << endl;
        cout << "Status: " << (isIssued ? "Issued" : "Available") << endl;
    }
};

int main()
{
    Library book;
    int choice;

    do
    {
        cout << "\n===== Library Management System =====\n";
        cout << "1. Add Book\n";
        cout << "2. Issue Book\n";
        cout << "3. Return Book\n";
        cout << "4. Display Book Details\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            book.addBook();
            break;
        case 2:
            book.issueBook();
            break;
        case 3:
            book.returnBook();
            break;
        case 4:
            book.displayBook();
            break;
        case 5:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 5);

    return 0;
}
