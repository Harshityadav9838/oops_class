#include <iostream>
using namespace std;
class Employee {
    static int aliveCount;
public:
    Employee() {
        aliveCount++;
        cout << "Employee created. Alive count: " << aliveCount << endl;
    }

    ~Employee() {
        aliveCount--;
        cout << "Employee destroyed. Alive count: " << aliveCount << endl;
    }

};
int Employee::aliveCount = 0;
int main() {
    Employee e1;
    {
        Employee e2;
        Employee e3;
    } // e2 and e3 destroyed here -> count back to 1
    cout << "Back in main()"<<endl;

}//e1 destroyed here -> count back to 0

// constructor does ++ - because a new object is created 
// destructor does -- because an object is destroyed.
// both use the same static variable so the count stays accurate across all objects - this is 
// only possible because atatic members are shared across all instances of the class.

// concept one line definition 
// static data member: single variable shared by all objects of the class.
// static member function: class level function , callable without an object of the class.
// const object:cannot be modified after creation 
// const function gurantee it wont't modify the object it is called on.
