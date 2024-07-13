// You are a programmer for the ABC Bank assigned to develop a class that models the basic
// workings of a bank account. The class should perform the following tasks:
// o Save the account balance.
// o Save the number of transactions performed on the account.
// o Allow deposits to be made to the account.
// o Allow with drawls to be taken from the account.
// o Report the current account balance at any time.
// o Report the current number of transactions at any time
// Menu
// 1. Display the account balance
// 2. Display the number of transactions
// 3. Display interest earned for this period
// 4. Make a deposit
// 5. Make a withdrawal
// 6. Exit the program

#include <iostream>
using namespace std;
class bankAccount{
public:
    float balance, transactions, interestRate = 0.15;
    bankAccount()
    {
        balance = 0;
        transactions = 0;
    }
    void displaybalance(){
        cout << "Your current balance is: " << balance << endl;
    }
    void displaytransaction(){
        cout << "Your number of transactions is: " << transactions << endl;
    }
    void deposit(float ammount){
        balance = balance + ammount;
        transactions++;
        cout << "The deposit of " << ammount << " is completed." << endl;
    }
    void withdraw(float ammount){
        if (ammount <= balance)
        {
            balance -= ammount;
            transactions++;
            cout << "The withdrawal of " << ammount << " is completed." << endl;
        }
        else
        {
            cout << "Insufficient balance." << endl;
        }
    }
    void displayinterestearned(double period){
        double interestEarned = balance * interestRate * period;
        cout << "The interest earned for " << period << " years is " << interestEarned << "Rs." << endl;
    }
};
int main()
{
    bankAccount account;
    while (true)
    {
        cout << "\nMenu" << endl;
        cout << "1. Display The Account Balance. " << endl;
        cout << "2. Display The Number Of Transactions. " << endl;
        cout << "3. Display Interest Earned. " << endl;
        cout << "4. Make A Deposit. " << endl;
        cout << "5. Make A Withdrawal. " << endl;
        cout << "6. Exit The Program. " << endl;


        int choice;
        cout << "Enter your choice: ";
        cin >> choice;


        switch (choice)
        {
        case 1:
        {
            account.displaybalance();
            break;
        }


        case 2:
        {
            account.displaytransaction();
            break;
        }


        case 3:
        {
            account.displayinterestearned(4);
            break;
        }
        case 4:
        {
            float depositammount;
            cout<<"Enter deposit ammount: ";
            cin>>depositammount;
            account.deposit(depositammount);
            break;
        }
        case 5:
        {
            float withdrawalammount;
            cout<<"Enter the ammount to be withdrawed: ";
            cin>>withdrawalammount;
            account.withdraw(withdrawalammount);
            break;
        }
        case 6:
        {
            cout<<"Exiting the program."<<endl;
            return 0;
        }
        default:
        cout<<"Invalid choice"<<endl;
        }
    }
    return 0;
}
