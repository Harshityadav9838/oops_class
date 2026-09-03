#include<iostream>
using namespace std;
class student{
    public:
    static int totalstudent;

    student(){
        totalstudent++;
    }
};
int student::totalstudent=0;
int main(){
    student s1;
    student s2;
    cout<<"Total student: "<<student::totalstudent<<endl;
    return 0;
}