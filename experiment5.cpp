//design a class to represent a bank account with proper data hiding and member function
//  for   deposit and withdrawl operation 
#include <iostream>
using namespace std;
class BankAccount {
    private:
        string accountHolderName;
        int accountNumber;
        double balance;

    public:
        // Constructor to initialize the bank account
        BankAccount(string name, int number, double initialBalance) {
            accountHolderName = name;
            accountNumber = number;
            balance = initialBalance;
        }

        // Function to deposit money into the account
        void deposit(double amount) {
            if (amount > 0) {
                balance += amount;
                cout << "Deposited: " << amount << endl;
            } else {
                cout << "Deposit amount must be positive." << endl;
            }
        }

        // Function to withdraw money from the account
        void withdraw(double amount) {
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                cout << "Withdrew: " << amount << endl;
            } else if (amount > balance) {
                cout << "Insufficient funds." << endl;
            } else {
                cout << "Withdrawal amount must be positive." << endl;
            }
        }

        // Function to display account details
        void displayAccountDetails() const {
            cout << "Account Holder: " << accountHolderName << endl;
            cout << "Account Number: " << accountNumber << endl;
            cout << "Balance: " << balance << endl;
        }
};
int main() {
    // Create a bank account object
    BankAccount account("John Doe", 123456, 1000.0);

    // Display initial account details
    account.displayAccountDetails();

    // Perform deposit and withdrawal operations
    account.deposit(500.0);
    account.withdraw(200.0);
    account.withdraw(1500.0); // Attempt to withdraw more than balance

    // Display final account details
    account.displayAccountDetails();

    return 0;
}