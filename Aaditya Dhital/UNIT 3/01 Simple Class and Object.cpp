#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int rollNo;

    void display() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main() {
    Student student;

    student.name = "John";
    student.rollNo = 101;

    student.display();

    return 0;
}