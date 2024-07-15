// “Hotel Mercato” requires a system module that will help the hotel to calculate the
// rent of the customers. You are required to develop one module of the system
// according to the following requirements:
//  The hotel wants such a system that should have the feature to change the
// implementation independently of the interface. This will help when dealing
// with changing requirements.
//  The hotel charges each customer 1000.85/- per day. This amount is being
// decided by the hotel committee and cannot be changed fulfilling certain
// complex formalities.
//  The module then analyses he number of days. If the customer has stayed for
// more than a week in the hotel, he gets discount on the rent. Otherwise, he is
// being charged normally.
//  The discounted rent is being calculated after subtracting one day from the
// total number of days.
//  In the end, the module displays the following details:
// o Customer name
// o Days
// o Rent
// Note that, the function used for displaying purpose must not have the ability to
// modify any data member.

#include <iostream>
#include <string>

using namespace std;

class HotelRentCalculator {
private:
    string customerName;
    int days;
    double rent;
    static const double dailyRate;

    // Function to calculate the rent
    void calculateRent() {
        if (days > 7) {
            rent = dailyRate * (days - 1); // Discount for staying more than a week
        } else {
            rent = dailyRate * days;
        }
    }

public:
    // Parameterized constructor to initialize customer name and days
    HotelRentCalculator(string name, int daysStayed) : customerName(name), days(daysStayed) {
        calculateRent();
    }

    // Function to display the details, marked as const to ensure it does not modify the object
    void displayDetails() const {
        cout << "Customer Name: " << customerName << endl;
        cout << "Days Stayed: " << days << endl;
        cout << "Total Rent: " << rent << " /-" << endl;
    }
};

// Define the constant daily rate
const double HotelRentCalculator::dailyRate = 1000.85;

int main() {
    // Create a customer object with name and days stayed
    HotelRentCalculator customer1("John Doe", 10);

    // Display the details
    customer1.displayDetails();

    return 0;
}
