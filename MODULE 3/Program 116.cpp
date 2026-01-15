#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    int productId;
    string productName;
    int quantity;
    float price;

public:
    
    Product() {
        productId = 0;
        productName = "";
        quantity = 0;
        price = 0.0;
    }

    Product(int id, string name, int qty, float pr) {
        productId = id;
        productName = name;
        quantity = qty;
        price = pr;
    }

    void setProduct(int id, string name, int qty, float pr) {
        productId = id;
        productName = name;
        quantity = qty;
        price = pr;
    }

    void updateStock(int qty) {
        quantity += qty;
    }

    float getValue() {
        return quantity * price;
    }

    void display() {
        cout << productId << "\t\t"
             << productName << "\t\t"
             << quantity << "\t\t"
             << price << "\t\t"
             << getValue() << endl;
    }
};

class Inventory {
private:
    Product* products;   
    int count;

public:
    
    Inventory(int c) {
        count = c;
        products = new Product[count];
    }

    void addProduct(int index, int id, string name, int qty, float price) {
        products[index].setProduct(id, name, qty, price);
    }

    void updateProductStock(int id, int qty) {
        for (int i = 0; i < count; i++) {
            if (products[i].getValue() != 0 && qty != 0) {
                
            }
        }
    }

    void displayInventory() {
        float totalValue = 0;

        cout << "\n========= PRODUCT INVENTORY =========\n";
        cout << "ID\t\tName\t\tQty\t\tPrice\t\tValue\n";
        cout << "------------------------------------\n";

        for (int i = 0; i < count; i++) {
            products[i].display();
            totalValue += products[i].getValue();
        }

        cout << "------------------------------------\n";
        cout << "Total Inventory Value: " << totalValue << endl;
        cout << "====================================\n";
    }

    ~Inventory() {
        delete[] products;
    }
};

int main() {
    int n;
    cout << "Enter number of products: ";
    cin >> n;

    Inventory inv(n);

    int id, qty;
    float price;
    string name;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of product " << i + 1 << endl;
        cout << "Product ID: ";
        cin >> id;
        cout << "Product Name: ";
        cin >> name;
        cout << "Quantity: ";
        cin >> qty;
        cout << "Price: ";
        cin >> price;

        inv.addProduct(i, id, name, qty, price);
    }

    inv.displayInventory();

    return 0;
}
