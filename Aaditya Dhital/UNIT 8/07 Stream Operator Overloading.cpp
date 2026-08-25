// Write a C++ program to overload the insertion (<<) and extraction (>>) operators for a user-defined class.
#include <iostream>
using namespace std;

class Student {
private:
    int age;

public:
    friend istream& operator>>(istream& in, Student& s) {
        in >> s.age;
        return in;
    }

    friend ostream& operator<<(ostream& out, Student& s) {
        out << "Age = " << s.age;
        return out;
    }
};

int main() {
    Student s;

    cout << "Enter age: ";
    cin >> s;

    cout << s << endl;

    return 0;
}