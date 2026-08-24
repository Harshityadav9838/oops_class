#include <iostream>
using namespace std;
void interest(float amount, float rate = 5.0) {
    float si;
    si = (amount * rate) / 100;
    cout << "simple Interest: " << si << endl;
}
int main() {
    interest(1000, 6.0);
    interest(1000);
    return 0;
}