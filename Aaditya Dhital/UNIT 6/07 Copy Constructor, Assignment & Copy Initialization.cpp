// Write a C++ program to demonstrate copy initialization, assignment of objects, and a copy constructor by creating copies of a class object.
#include <iostream>
using namespace std;

class Test {
private:
    int x;

public:
    Test(int a) {
        x = a;
    }

    // Copy Constructor
    Test(const Test &obj) {
        x = obj.x;
    }

    void show() {
        cout << "x = " << x << endl;
    }
};

int main() {
    Test t1(10);

    // Copy initialization
    Test t2 = t1;

    // Copy constructor
    Test t3(t1);

    // Assignment
    Test t4(20);
    t4 = t1;

    t1.show();
    t2.show();
    t3.show();
    t4.show();

    return 0;
}