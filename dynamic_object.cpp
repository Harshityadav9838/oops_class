#include <iostream>
using namespace std;
class student {
    public:
        int rollNumber;
        string name;
       void displayStudent() {
            cout << "Roll Number: " << rollNumber << ", Name: " << name << endl;
        }
};
int main() {
    student* studentPtr = new student();
    studentPtr->rollNumber = 101;
    studentPtr->name = "John Doe";
    studentPtr->displayStudent();
    delete studentPtr; // Free the allocated memory
    return 0;
}