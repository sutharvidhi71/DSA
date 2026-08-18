#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){

    Node* head=new Node;
    Node* second=new Node;
    Node* third=new Node;

    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=nullptr;

    cout<<head->data<<endl;
    cout<<head->next->data<<endl;
    cout<<head->next->next->data<<endl;

    return 0;
}
// output------
// 10
// 20
// 30