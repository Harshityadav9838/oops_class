// #include <iostream>
// using namespace std;
// class student {
//     private:
//     int marks;
//     public:
//     student(){
//         marks = 90;
//     }
//     friend void display(student s);
// };
// void display(student s){
//     cout << "Marks: " << s.marks << endl;
// }
// int main(){
//     student f;
//     display(f);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class student {
//     private:
//     int marks;
//     public:
//     student(int m){
//         marks = m;
//     }
//     friend void compare(student s1, student s2);
//     friend void display(student s);
// };
// void compare(student s1, student s2){
//     if(s1.marks > s2.marks){
//         cout << "Student 1 has more marks." << endl;
//     } else if(s1.marks < s2.marks){
//         cout << "Student 2 has more marks." << endl;
//     } else {
//         cout << "Both students have equal marks." << endl;
//     }
// }
// void display(student s){
//     cout << "Marks: " << s.marks << endl;
// }
// int main(){
//     student f1(85);
//     student f2(90);
//     display(f1);
//     display(f2);
//     compare(f1, f2);
//     return 0;
// }

//friend function accessing public and private members 

// #include <iostream>
// using namespace std;
// class employee {
//     private:
//     int salary;
//     public:
//     string name;
//     employee(string n, int s){
//         name = n;
//         salary = s;
//     }
//     friend void display(employee e);
// };
// void display(employee e){
//     cout << "Name: " << e.name << endl;
//     cout << "Salary: " << e.salary << endl;
// }
// int main(){
//     employee e1("John", 50000);
//     display(e1);
//     return 0;
// }

//friend function for adding two object 

// #include <iostream>
// using namespace std;
// class number {
//     private:
//     int value;
//     public:
//     number(int v){
//         value = v;
//     }
//     friend number add(number n1, number n2);
//     void display(){
//         cout << "Value: " << value << endl;
//     }
// };
// number add(number n1, number n2){
//     return number(n1.value + n2.value);
// }
// int main(){
//     number n1(10);
//     number n2(20);
//     number n3 = add(n1, n2);
//     n3.display();
//     return 0;
// }

#include <iostream>
using namespace std;

class B;   // Forward declaration

class A {
private:
    int x;

public:
    A() {
        x = 46;
    }

    friend void add(A, B);
};

class B {
private:
    int y;

public:
    B() {
        y = 79;
    }

    friend void add(A, B);
};

void add(A a, B b) {
    cout << "Sum: " << a.x + b.y << endl;
}

int main() {
    A a;
    B b;

    add(a, b);

    return 0;
}