// Write a C++ program to demonstrate the difference between a structure and a class by creating objects of both and accessing their data members.
#include <iostream>
using namespace std;

// Structure
struct Student {
    int age;
};

// Class
class Teacher {
public:
    int age;
};

int main() {
    Student s;
    Teacher t;

    // Accessing structure data member
    s.age = 20;

    // Accessing class data member
    t.age = 35;

    cout << "Structure object age = " << s.age << endl;
    cout << "Class object age = " << t.age << endl;

    return 0;
}