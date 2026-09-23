#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class String {
    private:
     char str[100];
    public:
    String(const char s[] =" ") {
        strcpy(str, s);
    }
    // Overloading the + operator
    String operator+(String s) {
       String temp;
       strcpy(temp.str, str);
       strcat(temp.str, s.str);
       return temp;
    }
    void display() {
        cout << "String: " << str << endl;
    }
};
int main () {
    String str1("Hello, ");
    String str2("World!");
    String str3 = str1 + str2;
    str3.display();
    return 0;
}
