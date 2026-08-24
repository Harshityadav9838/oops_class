#include <iostream>
using namespace std;
class Salesman{
        private:
    float totalsalary;
    public:
    int id;
    string name;
    float unitsold;
    float salary;

   
void  get(){
    cout<<"Enter the salesman id and name"<<endl;
    cin>>id>>name;
    cout <<"Enter the salary of salesman"<<endl;
    cin>>salary;
    cout<<"Enter the unitsold by salesman"<<endl;
    cin>>unitsold;
}
void display(){
    cout<<"Salesman id is :"<<id<<endl;
    cout<<"Salesman name is :"<<name<<endl;
    cout<<"Salesman salary is :"<<salary<<endl;
    cout<<"Salesman units sold is :"<<unitsold<<endl;
    
}

void netsalary(){
    if(id==101){
    float commission;
    if(unitsold<10){
        commission=0;
    }
    else if(unitsold>=10 && unitsold<20){
        commission=0.05*(unitsold-10)*5000;
    }
    else if(unitsold>=20 && unitsold<30){
        commission=0.75*(unitsold-10)*5000;
    }
    else if(unitsold>=30&& unitsold<40){
        commission=0.1*(unitsold-10)*5000;
    }
    else if(unitsold>=40&& unitsold<50){
        commission=0.15*(unitsold-10)*5000;
    }
    else if(unitsold>=40&& unitsold<50){
        commission=0.15*(unitsold-10)*5000;
    }
    else if(unitsold>=50){
        commission=0.2*(unitsold-10)*5000;
    }
    totalsalary=salary+commission;
    cout<<"Salesman net salary is :"<<totalsalary<<endl;
    }
    else{
    cout<<"Invalid salesman id"<<endl;
}
}
};
int main(){
    Salesman s;
    s.get();
    
    s.netsalary();
    s.display();
    return 0;
}