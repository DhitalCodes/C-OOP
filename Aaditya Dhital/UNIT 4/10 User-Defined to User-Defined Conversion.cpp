// Write a C++ program to convert an object of one class into an object of another class, demonstrating conversion using a routine in the source class and a conversion constructor in the destination class.
#include <iostream>
using namespace std;

class Source
{
    int value;

public:
    Source(int v)
    {
        value = v;
    }

    int getValue()
    {
        return value;
    }
};

class Destination
{
    int value;

public:
    // Conversion constructor
    Destination(Source obj)
    {
        value = obj.getValue();
    }

    void display()
    {
        cout << "Value in Destination class = " << value << endl;
    }
};

int main()
{
    Source s(100);

    // Converting Source object into Destination object
    Destination d = s;

    d.display();

    return 0;
}