// student info using default, parameterized, copy constructor
#include <iostream>
using namespace std;

class student {
    int id;
    string name;
    float marks;
public:
    student():id(0), name(""), marks(0.0){} // Default constructor
    student(int i, string n, float m):id(i), name(n), marks(m){} // Parameterized constructor
    student(const student &s):id(s.id), name(s.name), marks(s.marks){} // Copy constructor
    void display() {
        cout << "Student ID: " << id << endl;
        cout << "Student Name: " << name << endl;
        cout << "Student Marks: " << marks << endl;
    }
};

int main() {
    student s1; // Calls default constructor
    student s2{101, "Alice", 85.5}; // Calls parameterized constructor
    student s3{s2}; // Calls copy constructor
    s1.display();
    s2.display();
    s3.display();
    return 0;
}