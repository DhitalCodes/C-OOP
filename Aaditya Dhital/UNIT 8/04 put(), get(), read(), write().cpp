// Write a C++ program to demonstrate character and block file operations using put(), get(), read(), and write() member functions.
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char ch;
    char data[] = "Hello";

    // put() - write character
    ofstream out("data.txt");
    out.put('A');
    out.close();

    // get() - read character
    ifstream in("data.txt");
    in.get(ch);
    cout << "Character: " << ch << endl;
    in.close();

    // write() - write block of data
    ofstream file("block.dat", ios::binary);
    file.write(data, sizeof(data));
    file.close();

    // read() - read block of data
    char buffer[10];

    ifstream file2("block.dat", ios::binary);
    file2.read(buffer, sizeof(data));
    file2.close();

    cout << "Block: " << buffer << endl;

    return 0;
}