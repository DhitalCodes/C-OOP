// Write a C++ program to demonstrate a virtual destructor and a virtual base class in inheritance.
#include <iostream>
using namespace std;

// Virtual Base Class
class A {
public:
    int x = 10;
};

class B : virtual public A {
};

class C : virtual public A {
};

class D : public B, public C {
public:
    void show() {
        cout << "x = " << x << endl;
    }
};

// Virtual Destructor
class Base {
public:
    virtual ~Base() {
        cout << "Base Destructor" << endl;
    }
};

class Derived : public Base {
public:
    ~Derived() {
        cout << "Derived Destructor" << endl;
    }
};

int main() {
    D obj;
    obj.show();

    Base *ptr = new Derived;
    delete ptr;

    return 0;
}