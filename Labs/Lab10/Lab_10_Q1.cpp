// 1. Create a C++ Program to add, subtract, multiply and divide two numbers using class
// template. Two numbers can be of the same datatype or combination of different
// data types.
#include <iostream>
using namespace std;

template<class T1, class T2>
class Math {
    T1 num1;
    T2 num2;
public:
    Math() {}
    Math(T1 n1, T2 n2) : num1(n1), num2(n2) {}

    auto add() {
        return num1 + num2;
    }

    auto subtract() {
        return num1 - num2;
    }

    auto multiply() {
        return num1 * num2;
    }

    auto divide() {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            throw runtime_error("Division by zero error");
        }
    }

    void displayResults() {
        cout << "Addition: " << add() << endl;
        cout << "Subtraction: " << subtract() << endl;
        cout << "Multiplication: " << multiply() << endl;
        cout << "Division: ";
        try {
            cout << divide() << endl;
        } catch (const runtime_error& e) {
            cout << e.what() << endl;
        }
    }
};

int main() {
    Math<int, int> intMath(10, 5);
    intMath.displayResults();

    Math<float, int> floatIntMath(10.5, 2);
    floatIntMath.displayResults();

    Math<int, float> intFloatMath(10, 2.5);
    intFloatMath.displayResults();

    Math<double, double> doubleMath(5.5, 2.2);
    doubleMath.displayResults();

    return 0;
}

