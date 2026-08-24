#include <iostream>
using namespace std;

// Call by Value
void swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapValue: a = " << a << ", b = " << b << endl;
}
// Call by Reference
void swapReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
// Call by Address (Pointers)
void swapAddress(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int c = 2, d = 3;
    cout << "Original values: c = " << c << ", d = " << d << endl;
    // Call by Value
    swapValue(c, d);
    cout << "After swapValue: c = " << c << ", d = " << d << " (unchanged)" << endl;
    // Call by Reference
    swapReference(c, d);
    cout << "After swapReference: c = " << c << ", d = " << d << " (swapped)" << endl;
    // Reset values
    c = 2; d = 3;
    // Call by Address
    swapAddress(&c, &d);
    cout << "After swapAddress: c = " << c << ", d = " << d << " (swapped)" << endl;
    return 0;
}
 