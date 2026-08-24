// Write a C++ program to convert a class object into a basic data type using a conversion function.
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

    // Conversion function
    operator int()
    {
        return value;
    }
};

int main()
{
    Number n(50);

    // Class object converted into int
    int x = n;

    cout << "Class object value = " << x << endl;

    return 0;
}