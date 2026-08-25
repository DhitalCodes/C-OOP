// Write a C++ program to demonstrate multiple exceptions using multiple catch blocks and pass an argument with the exception using throw.
#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Enter 1 for division error or 2 for negative number: ";
    cin >> choice;

    try {
        if (choice == 1)
            throw 0;

        if (choice == 2)
            throw -10;

        cout << "No exception";
    }
    catch (int x) {
        if (x == 0)
            cout << "Exception: Division by zero" << endl;
        else
            cout << "Exception: Negative number " << x << endl;
    }
    catch (const char* msg) {
        cout << "Exception: " << msg << endl;
    }

    return 0;
}