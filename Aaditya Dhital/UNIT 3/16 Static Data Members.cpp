// Write a C++ program to demonstrate a static data member that keeps track of the number of objects created for a class.
#include <iostream>
using namespace std;

class Student {
    static int count;

public:
    Student() {
        count++;
    }

    static void displayCount() {
        cout << "Number of objects created = " << count << endl;
    }
};

// Definition of static data member
int Student::count = 0;

int main() {
    Student s1;
    Student s2;
    Student s3;

    Student::displayCount();

    return 0;
}