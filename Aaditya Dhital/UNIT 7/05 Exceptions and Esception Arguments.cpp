// Write a C++ program to demonstrate exception handling using try, throw, and catch for an invalid operation such as division by zero.
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 0;

    try {
        if (b == 0)
            throw "Division by zero is not allowed";

        cout << a / b;
    }
    catch (const char* msg) {
        cout << "Exception: " << msg << endl;
    }

    return 0;
}