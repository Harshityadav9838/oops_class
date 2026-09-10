//write a program to pass objects as arguments and return objects from functions to perform operations on user defined data 
#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    // Function to pass object as argument
    void displayArea(const Rectangle& rect) {
        cout << "Area: " << rect.length * rect.width << endl;
    }

    // Function to return object from function
    Rectangle scale(double factor) {
        return Rectangle(length * factor, width * factor);
    }
};

int main() {
    Rectangle r1(5.0, 3.0);
    Rectangle r2(10.0, 6.0);

    r1.displayArea(r2);  // Pass r2 as argument

    Rectangle r3 = r1.scale(2.0);  // Return scaled object from function
    r3.displayArea(r3);

    return 0;
}