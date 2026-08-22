#include<iostream>
using namespace std;

struct Node{
    int value;
    Node* next;
};
void insert(){

}
int main(){
    Node* head=nullptr;
    Node* tail=nullptr;
    return 0;
}





// The basic algorithm is:

// 1. Start current at head
// 2. While current isn't nullptr:
//       check current->value
//       if it matches → found
//       otherwise → current = current->next
// 3. If current becomes nullptr → not found