// Write a C++ program to demonstrate function overriding by defining the same member function in both a base class and a derived class.
#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base class function" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class function" << endl;
    }
};

int main() {
    Base b;
    Derived d;

    b.show();
    d.show();

    return 0;
}