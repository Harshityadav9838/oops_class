#include <iostream>
using namespace std;
class calculator{
    public:
    void display();

    class add{
        public:
        int sum(int a, int b) {
            return a + b;
        }
        int sum(int a, int b, int c) {
            return a + b + c;
        }
        double sum(double a, double b) {
            return a + b;
        }
    };

    class sub{
        public:
        int difference(int a, int b) {
            return a - b;
        }
        double difference(double a, double b) {
            return a - b;
        }
    };

    class mul{
        public:
        int product(int a, int b) {
            return a * b;
        }
        double product(double a, double b) {
            return a * b;
        }
    };
    class div{
        public:
        double quotient(double a, double b) {
            if(b != 0)
                return a / b;
            else {
                cout << "Error: Division by zero!" << endl;
                return 0; 
            }
        }
    };
};
int main() {
    calculator calc;
    calculator::add addition;
    calculator::sub subtraction;
    calculator::mul multiplication;
    calculator::div division;

    cout << "Addition : " << addition.sum(5, 3) << endl;
    cout << "Addition : " << addition.sum(5, 3, 2) << endl;
    cout << "Addition : " << addition.sum(5.5, 3.2) << endl;

    cout << "Subtraction : " << subtraction.difference(10, 4) << endl;
    cout << "Subtraction : " << subtraction.difference(10.5, 4.2) << endl;

    cout << "Multiplication : " << multiplication.product(6, 7) << endl;
    cout << "Multiplication : " << multiplication.product(6.5, 7.2) << endl;

    cout << "Division : " << division.quotient(20, 4) << endl;
    cout << "Division : " << division.quotient(20, 0) << endl;

    return 0;
}