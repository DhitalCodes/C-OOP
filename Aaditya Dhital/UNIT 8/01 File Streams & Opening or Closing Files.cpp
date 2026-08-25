// Write a C++ program to demonstrate file handling using ifstream, ofstream, and fstream by opening, reading, writing, and closing a file.
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile;
    ifstream inFile;
    fstream file;

    // Writing using ofstream
    outFile.open("data.txt");
    outFile << "Hello C++";
    outFile.close();

    // Reading using ifstream
    inFile.open("data.txt");

    string text;
    getline(inFile, text);
    cout << "Data: " << text << endl;

    inFile.close();

    // Using fstream
    file.open("data.txt", ios::in | ios::out);
    file.close();

    return 0;
}