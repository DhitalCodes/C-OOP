// Write a C++ program to demonstrate formatted and unformatted input/output using stream member functions and manipulators.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int age = 20;
    float marks = 85.5678;

    // Formatted I/O
    cout << "Age: " << setw(5) << age << endl;
    cout << "Marks: " << fixed << setprecision(2) << marks << endl;

    // Unformatted I/O
    cout << "Enter a character: ";
    char ch = cin.get();

    cout.put(ch);

    return 0;
}