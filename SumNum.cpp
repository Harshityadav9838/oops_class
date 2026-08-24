#include <iostream>
 using namespace std;
 class SumNum
 {
    private: int a,b;
    public:


    void inputData(){
     cout<<"enter first number:"<<endl;
     cin>>a;
     cout<<"enter second number:"<<endl;
     cin>>b;

     
   
    }
    void outputData(){
     cout<<"sum of two number:"<<endl;
     
     cout<<a<<"+"<<b<<"="<<a+b;
     cin>>b;

     
   
    }


 };
 int main(){
    SumNum s1;
    s1.inputData();
    s1.outputData();
    
 }