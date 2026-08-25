// Write a C++ program to demonstrate a class template that can store and display data of different data types.
#include <iostream>
using namespace std;

template <class T>
class Test {
private:
    T value;

public:
    Test(T v) {
        value = v;
    }

    void display() {
        cout << "Value = " << value << endl;
    }
};

int main() {
    Test<int> t1(10);
    Test<float> t2(5.5);
    Test<char> t3('A');

    t1.display();
    t2.display();
    t3.display();

    return 0;
}