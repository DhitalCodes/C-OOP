// Write a C++ program to demonstrate a static member function and the use of the this pointer to access the current object's data.
#include <iostream>
using namespace std;

class Test {
private:
    int x;

public:
    Test(int x) {
        this->x = x;
    }

    void show() {
        cout << "Value of x = " << this->x << endl;
    }

    static void staticFunction() {
        cout << "Static function called" << endl;
    }
};

int main() {
    Test t(10);

    t.show();
    Test::staticFunction();

    return 0;
}