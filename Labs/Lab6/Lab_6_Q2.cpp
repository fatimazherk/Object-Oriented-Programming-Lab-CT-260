// 1. Create a class called Calculator that has three private member variables Num1,
// Num2, Num3. In this class, you have to overload the functions for addition and
// multiplication such that they take two and three inputs respectively. You also have
// to make methods for subtraction and division. For example: add(1,2) and
// add(1,2,3) similarly for multiply, it would be multiply(1,2) and multiply(1,2,3). You
// may ask the user for input at the time of object creation. Afterwards just
// demonstrate how the functions are being called.

#include <iostream>

using namespace std;

class Calculator {
private:
    int num1, num2, num3;

public:
    Calculator() : num1(0), num2(0), num3(0) {}
    Calculator(int n1, int n2, int n3) : num1(n1), num2(n2), num3(n3) {}

    int add(int num1, int num2) {
        return num1 + num2;
    }

    int add(int num1, int num2, int num3) {
        return num1 + num2 + num3;
    }

    int multiply(int num1, int num2) {
        return num1 * num2;
    }

    int multiply(int num1, int num2, int num3) {
        return num1 * num2 * num3;
    }

    int subtract(int num1, int num2) {
        return num1 - num2;
    }

    int subtract(int num1, int num2, int num3) {
        return num1 - num2 - num3;
    }

    int divide(int num1, int num2) {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }

    void setNumbers(int n1, int n2, int n3) {
        num1 = n1;
        num2 = n2;
        num3 = n3;
    }

    void displayResults() {
        cout << "Results with 2 numbers (num1, num2):" << endl;
        cout << "Addition: " << add(num1, num2) << endl;
        cout << "Multiplication: " << multiply(num1, num2) << endl;
        cout << "Subtraction: " << subtract(num1, num2) << endl;
        cout << "Division: " << divide(num1, num2) << endl;

        cout << "Results with 3 numbers (num1, num2, num3):" << endl;
        cout << "Addition: " << add(num1, num2, num3) << endl;
        cout << "Multiplication: " << multiply(num1, num2, num3) << endl;
        cout << "Subtraction: " << subtract(num1, num2, num3) << endl;
    }
};

int main() {
    int n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    Calculator calc(n1, n2, n3);
    calc.displayResults();

    return 0;
}
