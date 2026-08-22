#include <iostream>
using namespace std;

class Student
{
    int roll;
    string name;

public:
    // Parameterized constructor
    Student(int r, string n)
    {
        roll = r;
        name = n;
    }

    void display()
    {
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s(10, "Ramu");
    s.display();

    return 0;
}