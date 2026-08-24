// Write a C++ program to overload both prefix and postfix ++ operators and demonstrate their difference.
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

    // Prefix ++
    Number operator++()
    {
        ++value;
        return *this;
    }

    // Postfix ++
    Number operator++(int)
    {
        Number temp = *this;
        value++;
        return temp;
    }

    void display()
    {
        cout << "Value = " << value << endl;
    }
};

int main()
{
    Number n(10);

    cout << "Prefix ++:" << endl;
    (++n).display();

    cout << "Postfix ++:" << endl;
    (n++).display();

    cout << "Value after postfix ++:" << endl;
    n.display();

    return 0;
}