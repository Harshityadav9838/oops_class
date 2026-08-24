#include <iostream>
using namespace std;

class Student
{
    int id;
    string name;

public:

    // 1. Default Constructor
    Student()
    {
        id = 0;
        name = "Unknown";
        cout << "Default Constructor called" << endl;
    }

    // 2. Parameterized Constructor
    Student(int i, string n)
    {
        id = i;
        name = n;
        cout << "Parameterized Constructor called" << endl;
    }

    // 3. Copy Constructor
    Student(const Student &s)
    {
        id = s.id;
        name = s.name;
        cout << "Copy Constructor called" << endl;
    }

    // Display function
    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor called for " << name << endl;
    }
};

int main()
{
    cout << "Creating object 1:" << endl;
    Student s1;
    s1.display();

    cout << "\nCreating object 2:" << endl;
    Student s2(101, "Harshit");
    s2.display();

    cout << "\nCreating object 3 using copy constructor:" << endl;
    Student s3 = s2;
    s3.display();

    cout << "\nEnd of main()" << endl;

    return 0;
}