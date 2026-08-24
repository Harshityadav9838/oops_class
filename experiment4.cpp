#include <iostream>
using namespace std;
int main() {
    auto a = 10; //  int
    auto b = 20.5; //  double
    auto c = "Hello"; //  const char*
    auto d = 'a'; //  char
    
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "d: " << d << endl;

     int num[]={10,20,30,40,50};
    for (int x : num){
        cout<< x<< endl;

    }

    return 0;
}