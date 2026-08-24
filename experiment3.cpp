#include <iostream>
using namespace std;

inline int square(int x){
    return x*x;

}

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

void interest(float amount, float rate = 5.0) {
    float si;
    si = (amount * rate) / 100;
    cout << "simple Interest: " << si << endl;
}

int main(){
    int a=3;
    cout<<"square:"<<square(a)<<endl;

interest(1000, 6.0);
    interest(1000);

    demo d;
    d.display(5);
    d.display(5, 10);
    d.display(5.5);
    d.display(5, 10.1f);

    return 0;
}
