// Implement the given UML class diagram by following the guidelines given below.
// - The interest Account class adds interest for every deposit, assuming a default of 30%.
// - The charging account class charges a default fee of Rs. 25 for every withdrawal.
// - Transfer method of ACI class tasks two parameters: amount to be transferred and object of
// class in which we have to transfer that amount.
// - Make parameterized constructor and default constructor to take user input for all data
// members.
// - Make a driver program to test all functionalities.

#include <iostream>
using namespace std;


class Account {
protected:
    double balance;
public:
    Account(double bal = 0.0) : balance(bal) {}


    virtual void deposit(double amount) {
        balance += amount;
    }


    virtual void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }


    double checkBalance() const {
        return balance;
    }
};


class InterestAccount : public Account {
private:
    double interest;
public:
    InterestAccount(double bal = 0.0, double intr = 0.30) : Account(bal), interest(intr) {}


    void deposit(double amount) override {
        balance += amount + (amount * interest);
    }
};


class ChargingAccount : public Account {
private:
    double fee;
public:
    ChargingAccount(double bal = 0.0, double f = 25.0) : Account(bal), fee(f) {}


    void withdraw(double amount) override {
        if (amount + fee <= balance) {
            balance -= (amount + fee);
        } else {
            cout << "Insufficient balance to cover withdrawal and fee!" << endl;
        }
    }
};


class ACI {
public:
    void transfer(double amount, Account &acc) {
        acc.deposit(amount);
    }


    void transfer(double amount, InterestAccount &acc) {
        acc.deposit(amount);
    }


    void transfer(double amount, ChargingAccount &acc) {
        acc.deposit(amount);
    }
};


int main() {
    Account acc(500);
    InterestAccount iAcc(500);
    ChargingAccount cAcc(500);
    ACI aci;


    cout << "Initial Balances:" << endl;
    cout << "Account: " << acc.checkBalance() << endl;
    cout << "InterestAccount: " << iAcc.checkBalance() << endl;
    cout << "ChargingAccount: " << cAcc.checkBalance() << endl;


    acc.deposit(100);
    iAcc.deposit(100);
    cAcc.withdraw(100);


    cout << "\nBalances after transactions:" << endl;
    cout << "Account: " << acc.checkBalance() << endl;
    cout << "InterestAccount: " << iAcc.checkBalance() << endl;
    cout << "ChargingAccount: " << cAcc.checkBalance() << endl;


    aci.transfer(50, acc);
    aci.transfer(50, iAcc);
    aci.transfer(50, cAcc);
    cout << "\nBalances after transfers:" << endl;
    cout << "Account: " << acc.checkBalance() << endl;
    cout << "InterestAccount: " << iAcc.checkBalance() << endl;
    cout << "ChargingAccount: " << cAcc.checkBalance() << endl;


    return 0;
}
