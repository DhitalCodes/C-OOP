// Write a C++ program to demonstrate checking file operation errors using eof(), fail(), bad(), and good().
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("data.txt");

    if (file.good())
        cout << "File operation is good." << endl;

    if (file.fail())
        cout << "File operation failed." << endl;

    if (file.bad())
        cout << "Serious file error occurred." << endl;

    char ch;

    while (file.get(ch))
        cout << ch;

    if (file.eof())
        cout << "\nEnd of file reached." << endl;

    file.close();

    return 0;
}