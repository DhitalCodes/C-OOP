// Write a C++ program to overload the unary - operator and demonstrate its working on an object.
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

    void operator-()
    {
        value = -value;
    }

    void display()
    {
        cout << "Value = " << value << endl;
    }
};

int main()
{
    Number n(10);

    cout << "Before applying unary -:" << endl;
    n.display();

    -n;   // Calls overloaded unary - operator

    cout << "After applying unary -:" << endl;
    n.display();

    return 0;
}