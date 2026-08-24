// Write a C++ program to demonstrate an abstract base class using a pure virtual function and implement it in a derived class.
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
};

class Circle : public Shape {
public:
    void area() {
        int r = 5;
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }
};

int main() {
    Circle c;
    c.area();

    return 0;
}