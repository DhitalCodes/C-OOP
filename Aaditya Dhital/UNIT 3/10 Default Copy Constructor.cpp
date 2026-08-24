// Write a C++ program to demonstrate the working of the compiler-provided default copy constructor by copying one object into another.
#include <iostream>
using namespace std;

class Student {
    int age;

public:
    void setAge(int a) {
        age = a;
    }

    void display() {
        cout << "Age = " << age << endl;
    }
};

int main() {
    Student s1, s2;

    s1.setAge(20);

    // Compiler-provided default copy constructor
    s2 = s1;

    cout << "Original object: ";
    s1.display();

    cout << "Copied object: ";
    s2.display();

    return 0;
}