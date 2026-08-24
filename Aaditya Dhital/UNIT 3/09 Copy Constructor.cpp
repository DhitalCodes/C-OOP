#include <iostream>
using namespace std;

class Student {
    int age;

public:
    Student(int a) {
        age = a;
    }

    // Copy Constructor
    Student(const Student &s) {
        age = s.age;
    }

    void display() {
        cout << "Age = " << age << endl;
    }
};

int main() {
    Student s1(20);     // Existing object
    Student s2 = s1;    // New object copied from s1

    cout << "Original object: ";
    s1.display();

    cout << "Copied object: ";
    s2.display();

    return 0;
}