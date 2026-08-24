#include <iostream>
using namespace std;
void squarebyaddress(int *num) {
    *num = (*num) * (*num);
}
int main() {
    int a;
    int b;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Original number: " << a << endl;
    squarebyaddress(&a);
    cout << "Squared number: " << a << endl;
    return 0;
}