#include <iostream>
using namespace std;

namespace First
{
    int value = 100;
}

namespace Second
{
    int value = 200;
}

int main()
{
    cout << First::value << endl;
    cout << Second::value;

    return 0;
}
