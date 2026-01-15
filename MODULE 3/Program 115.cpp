#include <iostream>
#include <string>
using namespace std;

class Item {
private:
    string itemName;
    int quantity;
    float price;

public:
    Item() {
        itemName = "";
        quantity = 0;
        price = 0.0;
    }

    void setItem(string name, int qty, float pr) {
        itemName = name;
        quantity = qty;
        price = pr;
    }

    float getTotal() {
        return quantity * price;
    }

    void displayItem() {
        cout << itemName << "\t\t" << quantity << "\t\t" 
             << price << "\t\t" << getTotal() << endl;
    }
};

class Customer {
private:
    string customerName;
    int customerId;
    int itemCount;
    Item* items;   

public:
    
    Customer(string name, int id, int count) {
        customerName = name;
        customerId = id;
        itemCount = count;
        items = new Item[itemCount];
    }

    void addItem(int index, string name, int qty, float price) {
        items[index].setItem(name, qty, price);
    }

    void displayBill() {
        float grandTotal = 0;

        cout << "\n========== CUSTOMER BILL ==========\n";
        cout << "Customer ID   : " << customerId << endl;
        cout << "Customer Name : " << customerName << endl;
        cout << "----------------------------------\n";
        cout << "Item\t\tQty\t\tPrice\t\tTotal\n";
        cout << "----------------------------------\n";

        for (int i = 0; i < itemCount; i++) {
            items[i].displayItem();
            grandTotal += items[i].getTotal();
        }

        cout << "----------------------------------\n";
        cout << "Grand Total: " << grandTotal << endl;
        cout << "==================================\n";
    }

    ~Customer() {
        delete[] items;
    }
};

int main() {
    int n;
    cout << "Enter number of items purchased: ";
    cin >> n;

    Customer c1("Sujal", 101, n);

    string name;
    int qty;
    float price;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for item " << i + 1 << endl;
        cout << "Item Name: ";
        cin >> name;
        cout << "Quantity: ";
        cin >> qty;
        cout << "Price: ";
        cin >> price;

        c1.addItem(i, name, qty, price);
    }

    c1.displayBill();

    return 0;
}
