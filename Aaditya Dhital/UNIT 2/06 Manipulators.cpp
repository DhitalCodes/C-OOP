#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int age;
    float marks;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter marks: ";
    cin >> marks;

    cout << endl;
    cout << setw(10) << "Age" << setw(10) << "Marks" << endl;
    cout << setw(10) << age << setw(10) << marks;

    return 0;
}
