// Write a C++ program to demonstrate the use of a destructor and display a message when an object is destroyed.
#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Object is created." << endl;
    }

    ~Demo() {
        cout << "Object is destroyed." << endl;
    }
};

int main() {
    Demo obj;

    cout << "Inside main function." << endl;

    return 0;
}