#include<iostream>
using namespace std;

struct Node{
    int value;
    Node* next;
};
bool insertNode(Node*& head,Node*& tail,int value,int position){
   if(position < 0){
    return false;
   }
   if(position==0){
    Node* newNode=new Node;
    newNode->value=value;
    newNode->next=head;
    head=newNode;

    if(tail==nullptr){
        tail=newNode;
    }
    return true;
   }
   Node* newNode=new Node;
   newNode->value=value;

   Node* current= head;
   for(int i=0;i<position-1;i++){
    if(current==nullptr){
    delete newNode;
    return false;
    }
    current=current->next;
   }
   if(current==nullptr){
    delete newNode;
        return false;
    }
    newNode->next=current->next;
    current->next=newNode;

    if(current==tail){
        tail=newNode;
    }
    return true;
}
int main(){
Node* head=nullptr;
Node* tail=nullptr;

insertNode(head,tail,100,0);
insertNode(head,tail,50,1);
insertNode(head,tail,40,0);
insertNode(head,tail,32,50);
insertNode(head,tail,-00,-1);
cout<<"after insertion:-"<<endl;

Node* current =head;
while(current!=nullptr){
    cout<<current->value<<"  ";
    current=current->next;
}
    return 0;
}

// output-------
// after insertion:-
// 40  100  50  

//trust me there is so so  much to explain to undertand each line of code .
// i think it will take half hour if i explain so i will skip it . but if you are 
// determinded to do this program clench your fist and ask chetGPT to explain this code
// i belive that you will understand it and do it your self like it took me more than  1 roung so 
// dont give up after few try . if i can do it so can you