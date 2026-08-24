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

#include <iostream>
using namespace std;
class employee {
    private:
    int salary;
    public:
    string name;
    employee(string n, int s){
        name = n;
        salary = s;
    }
    friend void display(employee e);
};
void display(employee e){
    cout << "Name: " << e.name << endl;
    cout << "Salary: " << e.salary << endl;
}
int main(){
    employee e1("John", 50000);
    display(e1);
    return 0;
}
