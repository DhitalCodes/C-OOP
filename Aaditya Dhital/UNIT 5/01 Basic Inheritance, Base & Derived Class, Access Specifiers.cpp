// Write a C++ program to demonstrate inheritance by creating a base class and a derived class, and show the use of private, protected, and public access specifiers.
#include <iostream>
using namespace std;

class Base {
private:
    int a = 10;

protected:
    int b = 20;

public:
    int c = 30;

    void showBase() {
        cout << "Private: " << a << endl;
        cout << "Protected: " << b << endl;
        cout << "Public: " << c << endl;
    }
};

class Derived : public Base {
public:
    void showDerived() {
        // cout << a;   // Not accessible
        cout << "Protected: " << b << endl;
        cout << "Public: " << c << endl;
    }
};

int main() {
    Derived d;

    d.showBase();
    d.showDerived();

    cout << "Public from main: " << d.c << endl;

    return 0;
}