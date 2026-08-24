 #include <iostream>
 using namespace std;
 class StudentInfo
 {
    private: 
     string name;
     int marks;
    
     int rollno;

    public:


    /*void inputData(){
     cout<<"enter name of student"<<endl;
     cin>>name;
     cout<<"enter rollno of student:"<<endl;
     cin>>rollno;
     cout<<"enter marks of student:"<<endl;
     cin>>marks;

     
   
    }
    void outputData(){
     cout<<"student name is:"<<name<<endl;
     cout<<"student rollno. is:"<<rollno<<endl;
     cout<<"student marks is:"<<marks<<endl;
     
     


     
   
    }


 };
 int main(){
    StudentInfo s1;
    s1.inputData();
    s1.outputData();
    
 }*/
    void set(int a,string b, int c)
    {
     name=b;
     rollno=a;
     marks=c;

    }
    string getname(){
     return name;
    }
    int getrollno(){
     return rollno;
    }
    int getmarks(){
     return marks;
    }
     };
 int main(){
    StudentInfo s1;
    s1.set(12,"aditya",97);
    cout<<"Student Name: "<<s1.getname()<<endl;
    cout<<"Student Roll No: "<<s1.getrollno()<<endl;
    cout<<"Student Marks: "<<s1.getmarks()<<endl;
 }