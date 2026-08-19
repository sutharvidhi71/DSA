#include<iostream>
using namespace std;

struct Node{
    int value;
    Node* next;
};

void InsertAtFirst(Node*&head,Node*&tail,int value){

    Node* newNode=new Node;
    newNode->value=value;
    newNode->next=nullptr;
    if(head==nullptr){
        head=newNode;
        tail=newNode;
    }else{
        newNode->next=head;
        head=newNode;
    }
}
int main(){
    Node* head=nullptr;
    Node* tail=nullptr;
InsertAtFirst(head,tail,10);
InsertAtFirst(head,tail,20);
InsertAtFirst(head,tail,30);
InsertAtFirst(head,tail,40);
InsertAtFirst(head,tail,50);

Node* current=head;
while(current!=nullptr){
    cout<<current->value<<"  ";
    current=current->next;
}
    return 0;
}
//output-------
// 50  40  30  20  10  

// some of use whould have assume that the orther if value will be i order of function call
// but since we are inserting at the first thats why it like this for the 2 second i was confuse
// too

// so imnsertion at first is more simpler .