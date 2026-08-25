// Write a C++ program to demonstrate sequential and random file access using seekg(), seekp(), tellg(), tellp(), and the offsets ios::beg, ios::cur, and ios::end.
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("data.txt", ios::in | ios::out | ios::trunc);

    file << "ABCDEFGHIJ";

    // tellp() - current position of put pointer
    cout << "Put position: " << file.tellp() << endl;

    // seekp() - move put pointer
    file.seekp(5, ios::beg);
    file.put('X');

    // tellg() - current position of get pointer
    file.seekg(0, ios::beg);
    cout << "Get position: " << file.tellg() << endl;

    // seekg() - move get pointer
    file.seekg(-2, ios::end);

    char ch;
    file.get(ch);

    cout << "Character: " << ch << endl;

    file.close();

    return 0;
}