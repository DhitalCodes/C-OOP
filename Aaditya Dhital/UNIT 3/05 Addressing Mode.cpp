#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    string name;
};

int main()
{
    Student s;
    Student *ptr = &s;

    ptr->roll = 10;
    ptr->name = "Ramu";

    cout << "Address of object: " << ptr << endl;
    cout << "Roll: " << ptr->roll << endl;
    cout << "Name: " << ptr->name << endl;

    return 0;
}