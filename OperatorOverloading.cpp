#include <iostream>
using namespace std;
class Number {
    private:
     int value;
    public:
    Number(int v){
        value =v;
    }
    // Overloading the + operator
    Number operator+(Number n) {
       Number temp(0);
       temp.value =value + n.value;
       return temp;
    }
    void display() {
        cout << "Value: " << value << endl;
    }
};
int main () {
    Number num1(10);
    Number num2(20);
    Number num3 = num1 + num2;
    num3.display();
    return 0;
}