
// A bakery is making a program to calculate the bills for each of their customers. The
// items in the bakery are categorized as follows:
// Item:
// - Name
// - Quantity
// Baked Goods: (derived from item)
// - Discount = 10%
// Cakes: (derived from baked goods)
// - Price = 600
// Bread: (derived from baked goods)
// - Price = 200
// Drinks: (derived from item)
// - Discount = 5%
// - Price = 100
// In your main function, as a bakery personnel,input the items and their quantities and calculate the bill accordingly.

#include <iostream>
#include <string>
using namespace std;


// Base class for bakery items
class Item {
protected:
    string name;
    int quantity;


public:
    // Default constructor
    Item() : name(""), quantity(0) {}


    // Parameterized constructor
    Item(string name, int quantity) : name(name), quantity(quantity) {}


    // Virtual destructor
    virtual ~Item() {}


    // Virtual function to calculate the total price for an item
    virtual float calculatePrice() const = 0;


    // Function to display item details
    void display() const {
        cout << "Item: " << name << ", Quantity: " << quantity << ", Total Price: $" << fixed <<"  "<<calculatePrice() << endl;
    }
};


// Derived class for Baked Goods
class BakedGoods : public Item {
public:
    // Default constructor
    BakedGoods() {}


    // Parameterized constructor
    BakedGoods(string name, int quantity) : Item(name, quantity) {}


    // Destructor
    ~BakedGoods() {}


    // Overridden function to calculate the total price for baked goods with a 10% discount
    float calculatePrice() const override {
        // Price for baked goods is not defined since it's an abstract concept
        return 0;
    }
};


// Derived class for Cakes
class Cake : public BakedGoods {
public:
    // Default constructor
    Cake() {}


    // Parameterized constructor
    Cake(int quantity) : BakedGoods("Cake", quantity) {}


    // Destructor
    ~Cake() {}


    // Overridden function to calculate the total price for cakes
    float calculatePrice() const override {
        const float pricePerCake = 600.0;
        const float discountRate = 0.1; // 10% discount
        float totalPrice = pricePerCake * quantity;
        return totalPrice - (totalPrice * discountRate);
    }
};


// Derived class for Bread
class Bread : public BakedGoods {
public:
    // Default constructor
    Bread() {}


    // Parameterized constructor
    Bread(int quantity) : BakedGoods("Bread", quantity) {}


    // Destructor
    ~Bread() {}


    // Overridden function to calculate the total price for bread
    float calculatePrice() const override {
        const float pricePerLoaf = 200.0;
        return pricePerLoaf * quantity;
    }
};


// Derived class for Drinks
class Drinks : public Item {
public:
    // Default constructor
    Drinks() {}


    // Parameterized constructor
    Drinks(string name, int quantity) : Item(name, quantity) {}


    // Destructor
    ~Drinks() {}


    // Overridden function to calculate the total price for drinks with a 5% discount
    float calculatePrice() const override {
        const float pricePerDrink = 100.0;
        const float discountRate = 0.05; // 5% discount
        float totalPrice = pricePerDrink * quantity;
        return totalPrice - (totalPrice * discountRate);
    }
};


int main() {
    // Input items and quantities
    int cakeQuantity, breadQuantity, drinkQuantity;
    cout << "Enter quantity of Cakes: ";
    cin >> cakeQuantity;
    cout << "Enter quantity of Bread: ";
    cin >> breadQuantity;
    cout << "Enter quantity of Drinks: ";
    cin >> drinkQuantity;


    // Create objects for each item type
    Cake cake(cakeQuantity);
    Bread bread(breadQuantity);
    Drinks drinks("Drink", drinkQuantity);


    // Display bill for each item
    cout << "Bill Details:" << endl;
    cake.display();
    bread.display();
    drinks.display();


    // Calculate total bill
    float totalBill = cake.calculatePrice() + bread.calculatePrice() + drinks.calculatePrice();
    cout << "Total Bill: $" << fixed << "  " << totalBill << endl;


    return 0;
}
