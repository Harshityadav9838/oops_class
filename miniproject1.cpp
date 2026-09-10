// array of objects of nested class miniproject1.cpp
#include<iostream>
using namespace std;
class bank {
    private:
    class account {
        private:
        int accountnumber;
        double balance;
        public:
        account(){
            accountnumber=0;
            balance=0;
        }
        account(int number,double amount){
            accountnumber=number;
            balance=amount;
        }
        // deposit method

        void deposit (double amount){
            if(amount>0){
                balance=balance+amount;
                cout<<"amount deposited successfully.\n";
                cout<<"updated balance:"<<balance<<endl;

            }
            else{
                cout<<"invalid account number:\n";
            }
        }
        // withdraw method
        void withdraw(double amount)
        {
            if(amount<=0){
                cout<<"invalid withdrawl amount.\n";
            }
            else if(amount>balance){
                cout<<"insufficient balance,\n";

            }
            else{
                balance=balance-amount;
                cout<<"amount withdrawn successfully.\n";
                cout<<"updated balance:"<<balance<<endl;
            }
            

        }
        // display account details 
        void showaccount(){
            cout<<"\naccount number:"<<accountnumber<<endl;
            cout<<"balance:"<<balance<<endl;
        }
        // return account number
        int getaccountnumber(){
            return accountnumber;
        }

    };
    public:

    //object array of nesterd class
    account accounts[5];
    
    //creat accounts 
    void createaccount(){
        cout<<"enter the no of accounts to create :";
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int number;
            double amount;
            cout<<"enter account number "<<i+1<<":";
            cin>>number;
            cout<<"enter initial balance :";
            cin>>amount;
            accounts[i]=account(number,amount);
        }
    }
    //find accounts 
    int findaccount(int number){
        for(int i=0;i<5;i++){
            if(accounts[i].getaccountnumber()==number){
                return i;
            }
        }
        return -1;
    }
    // display all accounts
    void showallaccounts(){
        cout<<"\n===== All Accounts =====\n";
        for(int i=0;i<5;i++){
            accounts[i].showaccount();
        }
    }

    //deposit 
    void deposit(){
        
        int number;
        double amount;

        cout<<"\nEnter account number to deposit:";
        cin>>number;

        int index=findaccount(number);
        if(index!=-1){
            cout<<"Enter amount to deposit:";
            cin>>amount;
            accounts[index].deposit(amount);
        }
        else{
            cout<<"account not found.\n";
        }
    }

    // withdrawl

    void withdraw(){
        int number;
        double amount;

        cout<<"\nEnter account number to withdraw:";
        cin>>number;

        int index=findaccount(number);
        if(index!=-1){
            cout<<"Enter amount to withdraw:";
            cin>>amount;
            accounts[index].withdraw(amount);
        }
        else{
            cout<<"account not found.\n";
        }
    }
    // show particular account details
    void showparticularaccount(){
        int number;
        cout<<"\nEnter account number to display details:";
        cin>>number;

        int index=findaccount(number);
        if(index!=-1){
            accounts[index].showaccount();
        }
        else{
            cout<<"account not found.\n";
        }
    }

};

int main(){
    bank mybank;
    mybank.createaccount();
    int choice;
    do{
        cout<<"\n===== Bank Menu =====\n";
        cout<<"1. Show All Accounts\n";
        cout<<"2. Deposit\n";
        cout<<"3. Withdraw\n";
        cout<<"4. Show Particular Account\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice:";
        cin>>choice;

        switch(choice){
            case 1:
                mybank.showallaccounts();
                break;
            case 2:
                mybank.deposit();
                break;
            case 3:
                mybank.withdraw();
                break;
            case 4:
                mybank.showparticularaccount();
                break;
            case 5:
                cout<<"Exiting...\n";
                break;
            default:
                cout<<"Invalid choice. Please try again.\n";
        }
    }while(choice!=5);

    return 0;
}