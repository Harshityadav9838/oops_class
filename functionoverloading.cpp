//Function overloading is a feature in C++ that allows you to define multiple functions 
//with the same name but with different parameter lists (different number, type, or order
// of parameters). The compiler decides which function to call based on the arguments passed.
#include <iostream>
using namespace std;
class demo{
    public:
    void display(int a){
        cout<<"Display function with one integer argument: "<<a<<endl;
    }
    void display(int a, int b){
        cout<<"Display function with two integer arguments: "<<a<<", "<<b<<endl;
    }
    void display(double a){
        cout<<"Display function with one double argument: "<<a<<endl;
    }
     void display(int a, float b){
        cout<<"sum: "<<a+b<<endl;
    }
};
int main() {
    demo d;
    d.display(5);
    d.display(5, 10);
    d.display(5.5);
    d.display(5, 10.1f); // This will call the overloaded function with two integer arguments
    return 0;
}