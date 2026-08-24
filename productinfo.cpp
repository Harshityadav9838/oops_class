#include <iostream>
using namespace std;

class Product{
    private:
    float totalprice;
    public:
    int id;
    string name;
    float price;
    int quantity;
 
void get(){
    cout<<"Enter the product id and name"<<endl;
    cin >> id>>name;
    cout <<"Enter the price of product"<<endl;
    cin>>price;
    cout<<"Enter the quantity of product"<<endl;
    cin>>quantity;
}
void display(){
    cout<<"Product id is :"<<id<<endl;
    cout<<"Product name is :"<<name<<endl;
    cout<<"Product price is :"<<price<<endl;
    cout<<"Product quantity is :"<<quantity<<endl;
    
}
};

int main(){
    Product p;
    p.get();
    p.display();
    return 0;
}

