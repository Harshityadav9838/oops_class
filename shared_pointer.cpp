#include <iostream>
#include <memory>
using namespace std;

int main(){
    shared_ptr<int> ptr1 = make_shared<int>(100);
cout<<"VAlue : "<<*ptr1<<endl;
cout<<"refrence count : "<<ptr1.use_count()<<endl;
    shared_ptr<int> ptr2 = ptr1;
cout<<"refrence count : "<<ptr2.use_count()<<endl;

    
    return 0;
}