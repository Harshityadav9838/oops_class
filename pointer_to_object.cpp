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
    student s;
    s.rollNumber = 101;
    s.name = "John Doe";
    student* ptr = &s; // Pointer to the student object
    ptr->displayStudent(); // Accessing member function using pointer
    return 0;
}