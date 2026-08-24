// Write a C++ program to define the member functions of a class outside the class definition using the scope resolution operator ::.\
#include <iostream>
using namespace std;

class Student {
    int age;

public:
    void setAge(int a);
    void display();
};

// Defining member functions outside the class
void Student::setAge(int a) {
    age = a;
}

void Student::display() {
    cout << "Age = " << age << endl;
}

int main() {
    Student s;

    s.setAge(20);
    s.display();

    return 0;
}