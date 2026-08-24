// Write a C++ program to demonstrate the use of a nameless temporary object while returning the result from an overloaded operator function.
#include <iostream>
using namespace std;

class Number
{
    int value;

public:
    Number(int v = 0)
    {
        value = v;
    }

    // Returns a nameless temporary object
    Number operator+(Number obj)
    {
        return Number(value + obj.value);
    }

    void display()
    {
        cout << "Value = " << value << endl;
    }
};

int main()
{
    Number n1(10), n2(20), n3;

    n3 = n1 + n2;

    cout << "Result = ";
    n3.display();

    return 0;
}