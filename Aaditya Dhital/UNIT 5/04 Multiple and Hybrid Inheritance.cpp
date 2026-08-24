// Write a C++ program to demonstrate multiple and hybrid inheritance using suitable base and derived classes.
#include <iostream>
using namespace std;

// Multiple Inheritance
class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B {
public:
    void showB() {
        cout << "Class B" << endl;
    }
};

class C : public A, public B {
public:
    void showC() {
        cout << "Multiple Inheritance" << endl;
    }
};

// Hybrid Inheritance
class D : public A {
public:
    void showD() {
        cout << "Class D" << endl;
    }
};

class E : public C, public D {
public:
    void showE() {
        cout << "Hybrid Inheritance" << endl;
    }
};

int main() {
    C obj1;
    obj1.showA();
    obj1.showB();
    obj1.showC();

    E obj2;
    obj2.showE();

    return 0;
}