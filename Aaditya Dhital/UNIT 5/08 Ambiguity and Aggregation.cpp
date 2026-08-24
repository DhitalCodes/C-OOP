// Write a C++ program to demonstrate ambiguity in multiple inheritance and resolve it using the scope resolution operator, and demonstrate aggregation by using an object of one class inside another class.
#include <iostream>
using namespace std;

// Ambiguity
class A {
public:
    void show() {
        cout << "Class A" << endl;
    }
};

class B {
public:
    void show() {
        cout << "Class B" << endl;
    }
};

class C : public A, public B {
};

// Aggregation
class Engine {
public:
    void start() {
        cout << "Engine started" << endl;
    }
};

class Car {
private:
    Engine e;

public:
    void drive() {
        e.start();
        cout << "Car is running" << endl;
    }
};

int main() {
    C obj;

    obj.A::show();   // Resolving ambiguity
    obj.B::show();

    Car car;
    car.drive();

    return 0;
}