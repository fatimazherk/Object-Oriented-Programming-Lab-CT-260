// By considering a scenario of your own choice, write a program to demonstrate the
// concept of constant keyword.

#include <iostream>

using namespace std;

class BankAccount {
private:
    const int accountNumber; // accountNumber should not change once set
    double balance;

public:
    // Constructor with initializer list to set accountNumber and initial balance
    BankAccount(int accNum, double initialBalance) : accountNumber(accNum), balance(initialBalance) {}

    // Function to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Function to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        } else {
            cout << "Invalid withdraw amount!" << endl;
        }
    }

    // Function to get the balance, marked as const to ensure it does not modify the object
    double getBalance() const {
        return balance;
    }

    // Function to get the account number, marked as const to ensure it does not modify the object
    int getAccountNumber() const {
        return accountNumber;
    }

    // Function to print account details, marked as const to ensure it does not modify the object
    void printAccountDetails() const {
        cout << "Account Number: " << accountNumber << ", Balance: " << balance << endl;
    }
};

int main() {
    // Create a bank account object with account number 12345 and initial balance of 1000.0
    BankAccount account(12345, 1000.0);

    // Deposit and withdraw operations
    account.deposit(500.0);
    account.withdraw(200.0);

    // Print account details
    account.printAccountDetails();

    // Attempt to change the balance directly (this will not compile because getBalance returns a const value)
    // account.getBalance() = 1000.0; // Uncommenting this line will cause a compile error

    // Display the account number and balance using const member functions
    cout << "Account Number (accessed through const method): " << account.getAccountNumber() << endl;
    cout << "Balance (accessed through const method): " << account.getBalance() << endl;

    return 0;
}
