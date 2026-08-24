// Write a C++ program to demonstrate the difference between a concrete class and an abstract class and show the role of polymorphism using derived class objects.
#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    virtual void draw() = 0;
};

// Concrete class
class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() {
        cout << "Drawing Rectangle" << endl;
    }
};

int main() {
    Circle c;
    Rectangle r;

    Shape *ptr;

    ptr = &c;
    ptr->draw();

    ptr = &r;
    ptr->draw();

    return 0;
}