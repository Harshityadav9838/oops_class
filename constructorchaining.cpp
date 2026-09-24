// #include <iostream>
// #include <string>
// using namespace std;

// class Student {
//     string name;
//     int rollno;
//     public:

//     Student(int r,string n){
//         rollno = r;
//         name = n;

//     }
//     Student():Student(101,"tillu"){
//         cout<<"default constructor called"<<endl;
//     }
//     void display(){
//         cout<< "Roll no. :"<<rollno<<endl;
//         cout<< "Name :"<<name<<endl;
//     }
// };
// int main(){
//     Student s;
//     s.display();
//     return 0;
// }

// //constructor chaining  through inheritence 
# include <iostream>
# include <string>
using namespace std;
class Person {
    public:
    Person(){
        cout<<"person constructor called"<<endl;
    }
};
class Student : public Person {
    public:
    Student(){
    cout<<"Student constructor  called"<<endl;
}
};
int main(){
    Student s;

    return 0;
}
