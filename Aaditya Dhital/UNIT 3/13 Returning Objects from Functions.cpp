// Write a C++ program in which a function returns an object of a class and display the returned object's data.
#include <iostream>
using namespace std;

class Number {
    int value;

public:
    void setValue(int v) {
        value = v;
    }

    Number add(Number n) {
        Number temp;
        temp.value = value + n.value;
        return temp;
    }

    void display() {
        cout << "Value = " << value << endl;
    }
};

int main() {
    Number n1, n2, n3;

    n1.setValue(10);
    n2.setValue(20);

    n3 = n1.add(n2);

    cout << "Returned object's data: ";
    n3.display();

    return 0;
}