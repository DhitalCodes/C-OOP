#include <iostream>
using namespace std;

class Rectangle {
private:
    float length, width;

public:
    void getData() {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter width: ";
        cin >> width;
    }

    float calculateArea() {
        return length * width;
    }

    void displayArea() {
        cout << "Area of Rectangle = " << calculateArea() << endl;
    }
};

int main() {
    Rectangle rect;

    rect.getData();
    rect.displayArea();

    return 0;
}