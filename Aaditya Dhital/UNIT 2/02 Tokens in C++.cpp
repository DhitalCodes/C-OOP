#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    const int c = 5;

    int result = a + b * c;

    cout << "Result = " << result;

    return 0;
}
