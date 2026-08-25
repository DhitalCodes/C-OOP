// Write a C++ program to demonstrate inheritance using a class template.
#include <iostream>
using namespace std;

template <class T>
class Base {
protected:
    T value;

public:
    Base(T v) {
        value = v;
    }
};

template <class T>
class Derived : public Base<T> {
public:
    Derived(T v) : Base<T>(v) {
    }

    void display() {
        cout << "Value = " << this->value << endl;
    }
};

int main() {
    Derived<int> d1(100);
    Derived<float> d2(25.5);

    d1.display();
    d2.display();

    return 0;
}