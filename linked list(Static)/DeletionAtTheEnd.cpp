#include<iostream>
using namespace std;

struct Node{
    int value;
    Node* next;
};

void InsertAtEnd(Node*& head,Node*& tail,int value){
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
bool DetelAtEnd(Node*& head,Node*& tail,int* result){
    if(head==nullptr){
        return false;
    }
    if(head==tail){
        *result=head->value;
        delete head;
        head=nullptr;
        tail=nullptr;
        return true;
    }
    Node* current=head;
    while(current->next!=tail){
        current=current->next;
    }
    delete tail;
    tail=current;
    current->next=nullptr;
}
int main(){
    Node* head=nullptr;
    Node* tail=nullptr;

    InsertAtEnd(head,tail,10);
    InsertAtEnd(head,tail,20);
    InsertAtEnd(head,tail,30);
    InsertAtEnd(head,tail,40);
    InsertAtEnd(head,tail,50);

    cout<<"before deletion-"<<endl;
    Node* current=head;
    while(current!=nullptr){
        cout<<current->value<<"  ";
        current=current->next;
    }

    int result;
    DetelAtEnd(head,tail,&result);
    DetelAtEnd(head,tail,&result);
    DetelAtEnd(head,tail,&result);

    cout<<"before deletion-"<<endl;
    current=head;
    while(current!=nullptr){
        cout<<current->value<<"  ";
        current=current->next;
    }

    return 0;
}
//output-------
// before deletion-
// 10  20  30  40  50  before deletion-
// 10  20  

//yet another program successfull in first try !!!💅🏼💅🏼💃🏼💃🏼