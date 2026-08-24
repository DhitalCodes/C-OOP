// Write a C++ program to demonstrate basic-to-basic conversion and conversion of a basic data type into a class object using a constructor.
#include <iostream>
using namespace std;

class Number
{
    int value;

public:
    // Constructor for basic-to-class conversion
    Number(int v)
    {
        value = v;
    }

    void display()
    {
        cout << "Class object value = " << value << endl;
    }
};

int main()
{
    // Basic-to-basic conversion
    int a = 10;
    float b = a;

    cout << "Basic-to-basic conversion:" << endl;
    cout << "Integer value = " << a << endl;
    cout << "Float value = " << b << endl;

    // Basic-to-class conversion
    int x = 25;
    Number n = x;

    cout << "\nBasic-to-class conversion:" << endl;
    n.display();

    return 0;
}