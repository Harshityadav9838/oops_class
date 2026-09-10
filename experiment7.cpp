// implement a program using static members and friend function to illustrate shared data and controlled access
#include <iostream>
using namespace std;

class Example {
private:
    int privateData;
    static int sharedData;  // Static member shared among all objects

public:
    Example(int value) : privateData(value) {}

    // Friend function declaration
    friend void displaySharedData();
    friend void updateSharedData(int value);
};

// Definition of static member
int Example::sharedData = 0;

// Friend function definition
void displaySharedData() {
    cout << "Shared Data: " << Example::sharedData << endl;
}

void updateSharedData(int value) {
    Example::sharedData = value;
}

int main() {
    Example obj1(10);
    Example obj2(20);

    updateSharedData(100);
    displaySharedData();

    return 0;
}