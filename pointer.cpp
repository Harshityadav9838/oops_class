#include<iostream>
using namespace std;
class student {
    private:
    int roll;
    public:
    void setroll(int roll){
        this->roll=roll;
    }
    void display(){
        cout<<"roll no."<<roll<<endl;
    }
};
int main(){
    student s;
    s.setroll(546);
    s.display();
}