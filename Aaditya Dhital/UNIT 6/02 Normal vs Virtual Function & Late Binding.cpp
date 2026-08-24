// Write a C++ program to demonstrate the difference between a normal member function and a virtual member function when accessed using a base class pointer.
#include <iostream>
using namespace std;

class Base {
public:
    void normal() {
        cout << "Base normal function" << endl;
    }

    virtual void virtualFunc() {
        cout << "Base virtual function" << endl;
    }
};

class Derived : public Base {
public:
    void normal() {
        cout << "Derived normal function" << endl;
    }

    void virtualFunc() {
        cout << "Derived virtual function" << endl;
    }
};

int main() {
    Base *ptr;
    Derived d;

    ptr = &d;

    ptr->normal();
    ptr->virtualFunc();

    return 0;
}