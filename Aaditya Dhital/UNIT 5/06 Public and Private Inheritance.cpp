// Write a C++ program to demonstrate the difference between public and private inheritance and show how inherited members are accessed.
#include <iostream>
using namespace std;

class Base {
public:
    int x = 10;

    void show() {
        cout << "Base function" << endl;
    }
};

// Public inheritance
class PublicChild : public Base {
};

// Private inheritance
class PrivateChild : private Base {
public:
    void display() {
        cout << x << endl;
        show();
    }
};

int main() {
    PublicChild p;
    cout << p.x << endl;
    p.show();

    PrivateChild q;
    q.display();

    // cout << q.x;   // Not accessible

    return 0;
}