#include <iostream>
#include <string>
using namespace std;
class Employee {
    public:
    int id;
    string name;
    string position;
    float  BS;
    float DA;
    float HRA;
    float grosssalary;
    float netsalary;
    float pf;


    void displayInfo() {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Employee position: " << position << endl;
        cout << "Employee basic salary: " << BS << endl;
        cout << "DA :"<<DA<<endl;
        cout << "HRA:"<<HRA<<endl;
        cout << "PF:"<<pf<<endl;
        cout << "Employee gross salary: " << grosssalary << endl;
        cout << "Employee net salary: " << netsalary << endl;
    }
    void Salary(float BS) {
        if(BS < 5000){
            netsalary = BS;
        }
        else if(BS >= 50000 && BS < 100000) {
            HRA = 0.20*BS;
            DA = 0.25*BS;
            grosssalary = BS + HRA + DA ;
            netsalary = grosssalary - pf;
         }
         else if(BS >= 100000 && BS < 150000) {
            HRA = 0.30*BS;
            DA = 0.35*BS;
            grosssalary = BS + HRA + DA;
            netsalary = grosssalary - pf;
         }
         else if(BS >= 150000) {
            HRA = 0.40*BS;
            DA = 0.45*BS;
            grosssalary = BS + HRA + DA;
            netsalary = grosssalary - pf;
         }
        }
        void PF(){
            if(grosssalary >=20000&& grosssalary < 50000){
                pf = 1250;
            }
            else if(grosssalary >50000){
                pf = 3650;
            }
           
        }
        void Employeedetail() {
            cout<< "Enter Employee ID: ";
            cin >> id;
            cout<< "Enter Employee Name: ";
            cin>> name;
            cout<< "Enter Employee Position: ";
            cin>> position;
            cout<< "Enter Employee Basic Salary: ";
            cin>> BS;
            Salary(BS);
        }
};
int main()
 {
    Employee e;
    e.Employeedetail();
    e.PF();
    e.displayInfo();

    return 0;
}