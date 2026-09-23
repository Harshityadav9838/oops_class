#include <iostream>
using namespace std;
// class Number{
//     int x;
//     public:
//     Number(int a){
//         x=a;
//     }
//     void operator-(){
//         x=-x;

//     }
//     void display(){
//         cout<<"value:"<<x<<endl;

//     }
// };
// int main(){
//    Number n(10);
//    cout<<"before";
//    n.display();
//    -n;
//    cout<<"after";
//     n.display();
//    return 0;

// }
class Number{
    int x;
    public:
    Number(int a){
        x=a;
    }
    void operator++(){
        ++x;

    }
    void display(){
        cout<<"value:"<<x<<endl;

    }
};
int main(){
   Number n(10);
   cout<<"before";
   n.display();
   ++n;
   cout<<"after";
    n.display();
   return 0;

}