#include<iostream>
using namespace std;

struct Node{
    int value;
    Node* next;
};
    bool insert(Node*&head,Node*&tail,int value){
        Node* newNode=new Node;
        newNode->value=value;
        newNode->next=nullptr;
        if(head==nullptr){
            head=newNode;
            tail=newNode;
            return true;
        }
        tail->next=newNode;
        tail=newNode;
        return true;
    }
    void deleteNode(Node*&head,Node*&tail,int position,int* result){
        if(position<0 || head==nullptr){
            return ;
        }
        if(position==0){
            Node* temp=head;
            *result=temp->value;
            head=head->next;
            delete temp;

            if(head==nullptr){
                tail=nullptr;
            }
            return ;
        }
        Node* current=head;
       for (int i = 0; i<position-1; i++)
       {
        if(current==nullptr){
            return ;
        }
        current=current->next;
       }
           if(current==nullptr){
            return ;
        }
        Node* temp=current->next;
        if(temp==nullptr){
            return ;
        }
        *result=temp->value;
        current->next=temp->next;
        delete temp;
        if(current->next==nullptr){
            tail=current;
        }
        

    }

int main(){
    Node* head=nullptr;
    Node* tail=nullptr;

    insert(head,tail,10);
    insert(head,tail,20);
    insert(head,tail,30);
    insert(head,tail,40);
    insert(head,tail,50);

    cout<<"before deletion:-"<<endl;
    Node* current =head;
    while (current!=nullptr)
    {
        cout<<current->value<<"  ";
        current=current->next;
    }
    cout<<endl;
    int result;
    deleteNode(head,tail,0,&result);
    cout<<result<<" is deleted"<<endl;//i know we should not print result in case 
    deleteNode(head,tail,2,&result);    //delation does not happens 
    cout<<result<<" is deleted"<<endl;  //but since in this senario its posible thats why i 
    deleteNode(head,tail,1,&result);    //printing directly
    cout<<result<<" is deleted"<<endl;
    //axepected remaining 20 and 50
    cout<<"after deletion:-"<<endl;

    current=head;//reassigning is so importent other condition will be false from start
     while (current!=nullptr)
    {
        cout<<current->value<<"  ";
        current=current->next;
    }
    return 0;
}
//output-----------
// before deletion:-
// 10  20  30  40  50  
// 10 is deleted
// 40 is deleted
// 30 is deleted
// after deletion:-
// 20  50 