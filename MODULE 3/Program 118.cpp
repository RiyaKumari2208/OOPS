#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int bookId;
    string title;

public:
    Book(int id, string t) {
        bookId = id;
        title = t;
    }

    void displayBook() {
        cout << bookId << "\t\t" << title << endl;
    }
};

class Library {
private:
    Book* books[5];   
    int count;

public:
    Library() {
        count = 0;
    }

    void addBook(Book* b) {
        books[count++] = b;
    }

    void showBooks() {
        cout << "\n------ Library Books ------\n";
        cout << "ID\t\tTitle\n";
        cout << "----------------------------\n";
        for (int i = 0; i < count; i++) {
            books[i]->displayBook();
        }
    }
};

int main() {
    Book b1(101, "C++ Programming");
    Book b2(102, "Data Structures");
    Book b3(103, "Operating Systems");

    Library lib;
    lib.addBook(&b1);
    lib.addBook(&b2);
    lib.addBook(&b3);

    lib.showBooks();

    return 0;
}
