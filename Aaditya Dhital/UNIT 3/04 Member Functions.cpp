#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    float divide(float a, float b) {
        return a / b;
    }
};

int main() {
    Calculator calc;
    float a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Addition = " << calc.add(a, b) << endl;
    cout << "Subtraction = " << calc.subtract(a, b) << endl;
    cout << "Multiplication = " << calc.multiply(a, b) << endl;

    if (b != 0)
        cout << "Division = " << calc.divide(a, b) << endl;
    else
        cout << "Division by zero is not possible." << endl;

    return 0;
}
