#include <iostream>
using namespace std;

void swaprefrence(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
void swapadress(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    //swap by refrence
    int x = 5, y = 10;
    cout << "Before swapping by refrence: x = " << x << ", y = " << y << endl;
    swaprefrence(x, y);
    cout << "After swapping by refrence: x = " << x << ", y = " << y << endl;
    //  swap by address
    int p = 5, q = 10;
    cout << "Before swapping by address: p = " << p << ", q = " << q << endl;
    swapadress(&p, &q);
    cout << "After swapping by address: p = " << p << ", q = " << q << endl;
    return 0;
}