#include <iostream>
using namespace std;

class student {
    int id;
public:
    student(int i):id(i){}
    ~student() {
        cout << "Student object destroyed." << endl;
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