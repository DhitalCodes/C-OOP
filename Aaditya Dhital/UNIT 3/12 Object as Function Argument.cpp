// Write a C++ program to pass an object as an argument to a member function and perform an operation using the data of both objects.
#include <iostream>
using namespace std;
class Number {
    int value;

public:
    void setValue(int v) {
        value = v;
    }

    // Passing object as an argument
    int add(Number n) {
        return value + n.value;
    }
};

int main() {
    Number n1, n2;

    n1.setValue(10);
    n2.setValue(20);

    cout << "Sum = " << n1.add(n2) << endl;

    return 0;
}