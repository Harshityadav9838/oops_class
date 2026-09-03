# include <iostream>
using namespace std;
// class Outer {
//     public:
//     class Inner {
//         public:
//         void display() {
//             cout << "This is the inner class." << endl;
//         }
//     };
// };
// int main() {
//     Outer::Inner obj;
//     obj.display();
//     return 0;
// }

//  NESTED CLASS 

// class Account{
//     private:
//         int accountNumber;
//         double balance;
//     public:
//         Account(int number ,double bal)  {
            
//             accountNumber = number;
//             balance = bal;      
//         }

//         void displayAccount() {
//             cout << "Account Number: " << accountNumber << ", Balance: " << balance << endl;
//         }    

// };
//  int main() {
//     Account account(12345, 1000.50);
//     account.displayAccount();
//     return 0;
//  }

class bank {
    private:
        int accountNumber;
        double balance;
    public:
        bank(int number, double bal) {
            accountNumber = number;
            balance = bal;
        }

        void displayAccount() {
            cout << "Account Number: " << accountNumber << ", Balance: " << balance << endl;
        }
    public:
     void createAccount() {
        bank newAccount(101, 1000.50);
        newAccount.displayAccount();
     }    
};
int main() {
    bank myBank(0, 0.0);
    myBank.createAccount();
    return 0;
}
