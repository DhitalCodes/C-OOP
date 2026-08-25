// Write a C++ program to demonstrate a function template that performs the same operation on different data types.
#include <iostream>
using namespace std;

template <class T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Integer: " << add(10, 20) << endl;
    cout << "Float: " << add(2.5, 3.5) << endl;

    return 0;
}