#include <iostream>
 using namespace std;
 class SumNum
 {
    public:
    int a,b;

    void addNum(){
        cout<<a<<"+"<<b<<"="<<a+b;
    }

 };
 int main(){
    SumNum s1;
    s1.a=65;
    s1.b=35;
    s1.addNum();
 }