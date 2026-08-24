// Write a C++ program to demonstrate simple, multilevel, and hierarchical inheritance using suitable classes.
#include <iostream>
using namespace std;

// Simple Inheritance
class A {
public:
    void showA() {
        cout << "Class A" << endl;
    }
};

class B : public A {
public:
    void showB() {
        cout << "Class B" << endl;
    }
};

// Multilevel Inheritance
class C : public B {
public:
    void showC() {
        cout << "Class C" << endl;
    }
};

// Hierarchical Inheritance
class D : public A {
public:
    void showD() {
        cout << "Class D" << endl;
    }
};

int main() {
    C obj1;
    obj1.showA();
    obj1.showB();
    obj1.showC();

    D obj2;
    obj2.showA();
    obj2.showD();

    return 0;
}