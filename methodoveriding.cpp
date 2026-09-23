// not virtual

#include <iostream>
using namespace std ;
class Account {
    public:
    void withdrawl(){
        cout<<"withdrawig with standard rules "<<endl; // not virtual 
    }
};
class SavingsAccount:public Account{
    public:
    void withdrawl(){
        cout<<"withdrawig with saving account limit"<<endl;
    }
};

int main (){
    SavingsAccount sa;
    sa.withdrawl();
    Account* a=&sa;
    a->withdrawl();
    return 0;
}