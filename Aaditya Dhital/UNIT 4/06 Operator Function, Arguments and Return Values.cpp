// Write a C++ program to demonstrate an operator function as a class member that accepts an object as an argument and returns an object as the result.
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

    // Operator function accepts an object and returns an object
    Number operator+(Number obj)
    {
        Number result;
        result.value = value + obj.value;
        return result;
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

    cout << "Result after adding two objects:" << endl;
    n3.display();

    return 0;
}