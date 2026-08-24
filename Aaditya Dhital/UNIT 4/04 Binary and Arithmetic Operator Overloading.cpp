// Write a C++ program to overload arithmetic operators such as +, -, *, and / for two objects.
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

    Number operator-(Number obj)
    {
        return Number(value - obj.value);
    }

    Number operator*(Number obj)
    {
        return Number(value * obj.value);
    }

    Number operator/(Number obj)
    {
        return Number(value / obj.value);
    }

    void display()
    {
        cout << value << endl;
    }
};

int main()
{
    Number n1(20), n2(10);

    Number sum = n1 + n2;
    Number diff = n1 - n2;
    Number product = n1 * n2;
    Number division = n1 / n2;

    cout << "Addition = ";
    sum.display();

    cout << "Subtraction = ";
    diff.display();

    cout << "Multiplication = ";
    product.display();

    cout << "Division = ";
    division.display();

    return 0;
}