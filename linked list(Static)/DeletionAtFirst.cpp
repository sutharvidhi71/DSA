    #include<iostream>
    using namespace std;
    struct Node{
        int value;
        Node* next;
    };

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
    bool DelateAtFirst(Node*&head,Node*& tail, int* result){
        if(head==nullptr){
            return false;
        }

        Node* temp=head;
        *result=head->value;
        head=head->next;
        delete temp;

        if(head==nullptr){
            tail=nullptr;
        }
    return true;
    }

    int main(){
        Node* head=nullptr;
        Node* tail=nullptr;
        AddAtEnd(head,tail,10);
        AddAtEnd(head,tail,20);
        AddAtEnd(head,tail,30);
        AddAtEnd(head,tail,40);

        cout<<"before delation linked list "<<endl;
        Node* current=head;
        while(current!=nullptr){
            cout<<current->value<<"  ";
            current=current->next;
        }
        int result;
    DelateAtFirst(head,tail,&result);
    DelateAtFirst(head,tail,&result);
    DelateAtFirst(head,tail,&result);

    cout<<endl<<"after delation"<<endl;
            current=head;
    while(current!=nullptr){
            cout<<current->value<<"  ";
            current=current->next;
        }
        return 0;
    }
    //output-----
    // before delation linked list 
    // 10  20  30  40  
    // after delation
    // 40 

    // this operation was so much fun 

    //yeah i know i didnt use result but since it was pointer aand was updated in each
    //delate operation we can print it and see which value was deleted each time 

    //lets see algorithm
    //-first thing first check if linked list is empty or not 
    //if yes return false
    //- save head in temporary pointer
    //-then save value that we want to remove
    //-then we update head and pass reference of nect node after it 
    //-dont forget to release memory assign by new ,use remove to remove it

    //    if(head==nullptr){
    //         tail==nullptr;
    //     }

    //this is realy importent code
    // what it actually do ?
    //first you have to imagine list with  onlyone node 
    //so as we perform all those step we talked about and head=head->next 
    //sine this node is last head will be head==nullptr
    //ssooo its importent for use to reassign tai to nullptr so that
    //after removel of last node list could maintain empty condition that is
    // head==nullptr && tail==nullptr

// That's the crucial thing.

// Then:

// head = head->next;
// delete temp;

// So the mental pattern is:

// Save old node → move head → delete old node.

//       save             move              destroy
//        ↓                ↓                   ↓
// Node* temp = head → head = head->next → delete temp

// That's the proper memory-safe linked-list deletion pattern. 