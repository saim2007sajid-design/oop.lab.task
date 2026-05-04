#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    string name;
    double price;
    int quantity;

public:
    // Setter for name - Validate non-empty
    void setName(string n) {
        if (n.empty()) {
            cout << "Error: Name cannot be empty" << endl;
        } else {
            name = n;
        }
    }
    
    // Setter for price - Validate price > 0
    void setPrice(double p) {
        if (p <= 0) {
            cout << "Error: Price must be greater than 0" << endl;
        } else {
            price = p;
        }
    }
    
    // Setter for quantity - Validate quantity >= 0
    void setQuantity(int q) {
        if (q < 0) {
            cout << "Error: Quantity cannot be negative" << endl;
        } else {
            quantity = q;
        }
    }
    
    // Getters for all fields
    string getName() { return name; }
    double getPrice() { return price; }
    int getQuantity() { return quantity; }
};

int main() {
    Product p;
    
    p.setName("");        // Should print error
    p.setPrice(-50);      // Should print error
    p.setQuantity(-2);    // Should print error

    p.setName("Laptop");
    p.setPrice(1200.50);
    p.setQuantity(5);

    cout << "Product: " << p.getName() << endl;
    cout << "Price: $" << p.getPrice() << endl;
    cout << "Quantity: " << p.getQuantity() << endl;
    
    return 0;
}
