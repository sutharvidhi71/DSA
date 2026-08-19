#include<iostream>
using namespace std;

struct Node{
    int value;
    Node* next;
};
void AddAtEnd1(Node*&head,int value){
    Node* newNode=new Node;
    newNode->value=value;
    newNode->next=nullptr;

    if(head==nullptr){
        head=newNode;
        return ;
    }
    Node* current=head;
while(current->next!=nullptr){
    current=current->next;
}

current->next=newNode;

}
void AddAtEnd(Node*&head,Node*& tail,int value){
    Node* newNode=new Node;
    newNode->value=value;
    newNode->next=nullptr;

    if(head==nullptr){
        head=newNode;
        tail=newNode;
    }
    
    else{
        tail->next=newNode;
        tail=newNode;
    }

}
int main(){
    Node* head=nullptr;
    Node* tail=nullptr;
AddAtEnd1(head,10);
AddAtEnd1(head,20);
AddAtEnd1(head,30);
AddAtEnd1(head,40);
    // AddAtEnd(head,tail,10);
    // AddAtEnd(head,tail,20);
    // AddAtEnd(head,tail,30);
    // AddAtEnd(head,tail,40);

    cout<<"list after insertion-"<<endl;

    Node* current=head;
    while(current!=nullptr){
        cout<<current->value<<"  ";
        current=current->next;
        }

    return 0;

}

//using  AddAtEnd fuction
//output---------
// list after insertion-
// 10  20  30  40 

//using  AddAtEnd1 fuction
//output---------
// list after insertion-
// 10  20  30  40  

//AddAtEnd fuction
    // it follows head and tail method in with head always points to first node of lisst
    // and tail points to last node of list so keeping track and updating tail only
    // makes this operation O(1) since we dont have to travel trough whole list till and 

//AddAtEnd1 fuction   
    // its a tipical way of inserting node at the end in which we only use head 
    // and then travels through all list till last node and then we assing next nodes
    // address to pointer variable next
    // it takes O(n).
