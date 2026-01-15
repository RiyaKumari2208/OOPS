#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    int productId;
    string productName;
    float price;

public:
    Product() {
        productId = 0;
        productName = "";
        price = 0.0;
    }

    Product(int id, string name, float pr) {
        productId = id;
        productName = name;
        price = pr;
    }

    float getPrice() const {
        return price;
    }

    string getName() const {
        return productName;
    }

    void displayProduct() const {
        cout << productId << "\t\t" << productName << "\t\t" << price << endl;
    }
};

class CartItem {
private:
    Product product;
    int quantity;

public:
    CartItem() {
        quantity = 0;
    }

    CartItem(Product p, int qty) : product(p) {
        quantity = qty;
    }

    float getTotalPrice() const {
        return product.getPrice() * quantity;
    }

    void displayItem() const {
        cout << product.getName() << "\t\t" << quantity << "\t\t" << getTotalPrice() << endl;
    }
};

class ShoppingCart {
private:
    CartItem* items;  
    int count;

public:
    ShoppingCart(int n) {
        count = n;
        items = new CartItem[count];
    }

    void addItem(int index, Product p, int qty) {
        if(index >= 0 && index < count)
            items[index] = CartItem(p, qty);
    }

    void showCart() const {
        float total = 0;
        cout << "\n========== SHOPPING CART ==========\n";
        cout << "Product\t\tQty\t\tTotal\n";
        cout << "----------------------------------\n";

        for (int i = 0; i < count; i++) {
            items[i].displayItem();
            total += items[i].getTotalPrice();
        }

        cout << "----------------------------------\n";
        cout << "Grand Total: " << total << endl;
        cout << "==================================\n";
    }

    ~ShoppingCart() {
        delete[] items;  
    }
};

int main() {
    
    Product p1(101, "Laptop", 100000);
    Product p2(102, "Mouse", 800);
    Product p3(103, "Keyboard", 1800);

    
    ShoppingCart cart(3);

    cart.addItem(0, p1, 1);
    cart.addItem(1, p2, 2);
    cart.addItem(2, p3, 1);

    cart.showCart();

    return 0;
}
