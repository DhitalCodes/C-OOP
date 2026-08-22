#include <iostream>
using namespace std;

void change(int *p)
{
    *p = 50;
}

int main()
{
    int a = 10;

    int *p = &a;

    cout << "Address of a = " << &a << endl;
    cout << "Value of a = " << a << endl;
    cout << "Value using pointer = " << *p << endl;

    change(&a);

    cout << "Value after function = " << a;

    return 0;
}
