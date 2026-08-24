// Write a C++ program to demonstrate a friend function and a friend class accessing the private data members of another class.
#include <iostream>
using namespace std;

class Test {
private:
    int x = 100;

    friend void show(Test);
    friend class FriendClass;
};

void show(Test t) {
    cout << "Friend Function: " << t.x << endl;
}

class FriendClass {
public:
    void display(Test t) {
        cout << "Friend Class: " << t.x << endl;
    }
};

int main() {
    Test t;

    show(t);

    FriendClass f;
    f.display(t);

    return 0;
}