// Write a C++ program to store records in a file and demonstrate both sequential and random access to the records.
#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    int roll;
    char name[20];
};

int main() {
    Student s[3] = {
        {1, "Ram"},
        {2, "Shyam"},
        {3, "Hari"}
    };

    // Store records
    ofstream out("student.dat", ios::binary);

    for (int i = 0; i < 3; i++)
        out.write((char*)&s[i], sizeof(Student));

    out.close();

    // Sequential access
    ifstream in("student.dat", ios::binary);

    Student temp;

    cout << "Sequential Access:" << endl;

    while (in.read((char*)&temp, sizeof(Student))) {
        cout << temp.roll << " " << temp.name << endl;
    }

    // Random access: go to second record
    in.clear();
    in.seekg(sizeof(Student), ios::beg);

    in.read((char*)&temp, sizeof(Student));

    cout << "\nRandom Access:" << endl;
    cout << temp.roll << " " << temp.name << endl;

    in.close();

    return 0;
}