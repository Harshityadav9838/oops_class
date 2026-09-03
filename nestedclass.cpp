# include <iostream>
using namespace std;
class Outer {
    public:
    class Inner {
        public:
        void display() {
            cout << "This is the inner class." << endl;
        }
    };
};
int main() {
    Outer::Inner obj;
    obj.display();
    return 0;
}