#include<iostream>
using namespace std;

struct Node{
    int value;
    Node* next;
};
// void AddAtEnd2(Node*& head,int value){
//     b
// }
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
// AddAtEnd1(head,10);
// AddAtEnd1(head,20);
// AddAtEnd1(head,30);
// AddAtEnd1(head,40);
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

//output---------
// list after insertion-
// 10  20  30  40  
