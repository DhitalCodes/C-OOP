// Write a C++ program to demonstrate a function template with multiple arguments to perform an operation on two different data values
#include <iostream>
using namespace std;

template <class T1, class T2>
void add(T1 a, T2 b) {
    cout << "Sum = " << a + b << endl;
}

int main() {
    add(10, 20);
    add(5, 2.5);

    return 0;
}