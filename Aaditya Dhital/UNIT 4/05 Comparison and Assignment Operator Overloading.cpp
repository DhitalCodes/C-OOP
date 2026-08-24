// Write a C++ program to overload the == comparison operator and the = assignment operator for class objects.
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

    // Overloading assignment operator =
    Number& operator=(const Number& obj)
    {
        value = obj.value;
        return *this;
    }

    // Overloading comparison operator ==
    bool operator==(const Number& obj)
    {
        return value == obj.value;
    }

    void display()
    {
        cout << "Value = " << value << endl;
    }
};

int main()
{
    Number n1(10), n2(20), n3;

    n3 = n1;   // Calls overloaded = operator

    cout << "After assignment:" << endl;
    n3.display();

    if (n1 == n3)   // Calls overloaded == operator
        cout << "n1 and n3 are equal." << endl;
    else
        cout << "n1 and n3 are not equal." << endl;

    return 0;
}