#include <iostream>
using namespace std;

class Student
{
    int roll;
    string name;

public:
    Student()
    {
        roll = 10;
        name = "Ramu";
    }

    void display()
    {
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    Student s;
    s.display();

    return 0;
}