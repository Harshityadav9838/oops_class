#include <iostream>
using namespace std;
class student {
    int id;
public:
    // student():id(0){}  // Default constructor

    student(int i):id(i){}   // Parameterized constructor

    // copy constructor
    student(const student &s) {
        id = s.id;
    }
 
 void display() {
        cout << "Student ID: " << id << endl;
    }
};
int main() {
    student s{101};
    s.display();
    return 0;
}
 