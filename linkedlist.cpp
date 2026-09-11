#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node(int value)
    {
        data=value;
        next=nullptr;
    }
};
int main(){
    Node *first = nullptr;
    Node *last = nullptr;
    int choice,value;
    do{
        cout<<"\n\n=====LINKED LIST MENU=====";
        cout<<"\n1. Create Node";
        cout<<"\n2. Display List";
        cout<<"\n3. Insert at position ";
        cout<<"\n4. Delete Node";
        cout<<"\n5. Exit";
        cout<<"\nEnter your choice: ";
        cin>>choice;
     switch(choice){
        case 1:{
            cout<<"\nEnter value for new node: ";
            cin>>value;
            Node *newNode = new Node(value);
            if(first==nullptr){
                first=newNode;
                last=newNode;
            }
            else{
                last->next=newNode;
                last=newNode;
            }
            cout<<"\nNode created successfully.";
            break;
        }
        case 2:
            if(first==nullptr){
                cout<<"\nList is empty.";
            }
            else{
                Node *temp=first;
                cout<<"\nLinked List: ";
                while(temp!=nullptr){
                    cout<<temp->data<<" ";
                    temp=temp->next;
                }
            }
            break;

        case 3:
            cout<<"\nEnter position to insert new node: ";
            int position;
            cin>>position;
            cout<<"\nEnter value for new node: ";
            cin>>value;
            Node *newNode = new Node(value);
            if(first==nullptr){
                first=newNode;
                last=newNode;
            }
            else{
                if(position==0){
                    newNode->next=first;
                    first=newNode;
                }
                else{
                    Node *current=first;
                    for(int i=0; i<position-1 && current->next!=nullptr; i++){
                        current=current->next;
                    }
                    newNode->next=current->next;
                    current->next=newNode;
                }
            }
            cout<<"\nNode inserted successfully.";
            break;

        case 4:
            cout<<"\nEnter value of node to delete: ";
            cin>>value;
            if(first==nullptr){
                cout<<"\nList is empty. Cannot delete.";
            }
            else if(first->data==value){
                Node *temp=first;
                first=first->next;
                delete temp;
                cout<<"\nNode deleted successfully.";
            }
            else{
                Node *current=first;
                Node *previous=nullptr;
                while(current!=nullptr && current->data!=value){
                    previous=current;
                    current=current->next;
                }
                if(current==nullptr){
                    cout<<"\nNode not found.";
                }
                else{
                    previous->next=current->next;
                    delete current;
                    cout<<"\nNode deleted successfully.";
                }
            }
            break;
        case 5:
            cout<<"\nExiting program.";
            break;
        default:
            cout<<"\nInvalid choice. Please try again.";
            break;    

     }
    }while(choice!=5);
}
    // Free allocated memory
