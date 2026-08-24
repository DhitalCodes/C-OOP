// Write a C++ program to demonstrate operator overloading by overloading the + operator to add two objects of a class.
#include <iostream>
using namespace std;

class Number
{
    int value;

public:
    Number(int v)
    {
        value = v;
    }

    Number operator+(Number obj)
    {
        return Number(value + obj.value);
    }

    void display()
    {
        cout << "Sum = " << value << endl;
    }
};

int main()
{
    Number n1(10), n2(20);

    Number n3 = n1 + n2;   // Calls overloaded + operator

    n3.display();

    return 0;
}