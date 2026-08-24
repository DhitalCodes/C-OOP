// Write a C++ program to demonstrate dynamic memory allocation for an object using the new and delete operators.
#include <iostream>
using namespace std;

class Student {
public:
    int age;

    void display() {
        cout << "Age = " << age << endl;
    }
};

int main() {
    // Dynamic memory allocation using new
    Student *s = new Student;

    s->age = 20;

    cout << "Dynamically allocated object: ";
    s->display();

    // Freeing memory using delete
    delete s;

    s = nullptr; // Set pointer to nullptr after deleting

    return 0;
}