//An inline function is a function that the compiler is encouraged to expand directly at the
// point where it is called, instead of performing a normal function call. This can reduce
// the overhead of function calls for small, frequently used functions.
#include <iostream>
using namespace std;

inline int square(int x){
    return x*x;

}
int main(){
    int a=3;
    cout<<"square:"<<square(a);
    return 0;
}
