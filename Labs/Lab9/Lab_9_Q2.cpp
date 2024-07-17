// Write a program to calculate final bill after discount. “ImtiazStore” gives 7 percent
// discount on total_bill while “BinHashimStore” gives 5 percent discount on total_bill.
// You have to initialize value of total_bill through a constructor and then calculate
// final bill after discount for both stores using the concept of abstract class and
// virtual functions.

#include<iostream>
#include<string>
using namespace std;

class Store {
protected:
    int bill;
    float discount;
public:
    Store(int b, float d): bill(b), discount(d) {}
    virtual void calculateBill() = 0;
};

class ImtiazStore : public Store {
public:
    ImtiazStore(int b): Store(b, 0.7) {}
    void calculateBill(){
        float finalBill = bill * discount;
        cout << "Bill After 30% discount is: " << finalBill << endl;
    }
};

class BinHashim : public Store {
public:
    BinHashim(int b): Store(b, 0.5) {}
    void calculateBill(){
        float finalBill = bill * discount;
        cout << "Bill After 50% discount is: " << finalBill << endl;
    }
};

int main() {
    ImtiazStore i1(30000);
    i1.calculateBill();
    
    BinHashim b1(30000);
    b1.calculateBill();

    return 0;
}

