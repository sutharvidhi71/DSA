#include<iostream>
using namespace std;

struct Node{
    int value;
    Node* next;
};

int main(){

Node* FirstNode =new Node;
Node* secondNode =new Node;
Node* thirdNode =new Node;

FirstNode->value=10;
FirstNode->next=secondNode;

secondNode->value=20;
secondNode->next=thirdNode;

thirdNode->value=30;
thirdNode->next=nullptr;

Node* current =FirstNode;
while(current!=nullptr){
    cout<<current->value<<"  ";
    current=current->next;
}

    return 0;

}
//output--------
// 10  20  30  

//so first we made structure for node containing value and address of next Node
//then we manually created three Node 
// then we connect them whith other by assigning address of next node to 
//that node pointer

// now thw importent thing to understand whow can one travers through linked lidst
//since linked list is not countiguous datastructure.

// we use poiner the one we have in each node poineting to next 

//Node* current =FirstNode;
//      by this we create a node pointer that stores address of firstNode  
// while(current!=nullptr)
//      and make contion to continue loop till current contain nullptr
//now comes interasting part of how do we travers throuogh every node

// round 1:current != nullptr  ✅

// current->value;//10  //since it points to firstNode it will print value that firstNode contains 

// current=current->next //secondNode//as we know Node contains pointer of next node in next
//                     // Variable now current will be pointing to next node after first node 

// round 2:current != nullptr  ✅

// current->value;//20

// current=current->next//thirdNode

// round 3:current != nullptr  ✅

// current->value;//30

// current=current->next//null ptr

// round 4:current != nullptr  ❌

// loop will stop here since we reach to nullotr 

// so thats how we start from first node and traverse till last
