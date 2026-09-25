#include  <iostream>
using namespace std;
class Distance{
    float meters;
    public:
    Distance(float m): meters(m){}
    void show(){cout<<meters<<"m";}
};
Distance d1=5.0f;
Distance d2(12.5f);

void printDistance (Distance d){d.show();}
int main(){
    printDistance(7.2f);
    return 0;
}
