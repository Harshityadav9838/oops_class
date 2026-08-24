// object as function argument
        
 #include <iostream>
 using namespace std;

// class Student {
//     public:
//     int marks;
// };
// void display(const Student &s) {
//     cout<< s.marks << endl;
// }
// int main () {
//    Student st{90};
//    display(st);
//    return 0;
// }

// object returned from function
// class point {
//     public:
//     int x,y;

// };
// point createpoint(int a, int b) {
//     point p= createpoint(10,20);
//     cout<<p.x<<" "<<p.y;
// }
// int main() {
//     point p;
//      createpoint(10,20);
   
//     return 0;
// }

// friend function

class box{
    private:
    int value=10;
    public:
    friend void show(const box& b);
};
void show(const box& b) {
    cout<<b.value;
}

int main() {
    box b;
    show(b);
    return 0;
}
  