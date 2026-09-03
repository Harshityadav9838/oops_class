#include <iostream>
using namespace std;
class student {
   
    static int rollno;
    public:
    string name;
    float marks;
    student(string n, float m) {
        name = n;
        marks = m;
        rollno++;
    }
    void display() {
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

};
int student::rollno = 0;
int main() {
    student s1("Hitesh", 85.5);
    student s2("Aditya", 90.0);
   

    s1.display();
    cout << endl;
    s2.display();
    cout << endl;
   
    return 0;
}