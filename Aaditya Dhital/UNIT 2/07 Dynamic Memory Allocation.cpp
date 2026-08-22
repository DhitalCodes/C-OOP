#include <iostream>
using namespace std;

int main()
{
    int *p;

    p = new int;

    *p = 50;

    cout << "Value = " << *p;

    delete p;

    return 0;
}
