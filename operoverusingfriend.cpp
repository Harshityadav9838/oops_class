# include <iostream>
using namespace std;
class Number {
    private:
    int value;
    public :
    Number(int v){
        value = v;
    }
    friend Number operator+(Number n1,Number n2);
    void display(){
        cout<<"Value"<<value<<endl;
    }
};
Number operator+(Number n1,Number n2){
    Number temp(0);
    temp.value = n1.value+n2.value;
    return temp;
}
int main(){
    Number n1(10);
    Number n2(20);
    Number n3 = n1 +n2;
    n3.display();
}