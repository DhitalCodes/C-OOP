// Write a C++ program to write data to a text file and a binary file and read the stored data back from both files.
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Text file
    ofstream textFile("text.txt");
    textFile << "Hello World";
    textFile.close();

    // Reading text file
    ifstream readText("text.txt");
    string text;
    getline(readText, text);
    cout << "Text File: " << text << endl;
    readText.close();

    // Binary file
    int num = 100;

    ofstream binaryFile("data.dat", ios::binary);
    binaryFile.write((char*)&num, sizeof(num));
    binaryFile.close();

    // Reading binary file
    int value;

    ifstream readBinary("data.dat", ios::binary);
    readBinary.read((char*)&value, sizeof(value));
    readBinary.close();

    cout << "Binary File: " << value << endl;

    return 0;
}