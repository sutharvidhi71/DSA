#include<iostream>
using namespace std;

#define MAX 10
int  stack[MAX],top=-1,choice=0;

bool push(int value){
    if(top==MAX-1){
        return false;
    }
    stack[++top]=value;
    return true;
}

int pop(){
    if(top==-1){
        return -1;
    }
    return stack[top--];
}
int peek(){
        if(top==-1){
        return -1;
    }
    return stack[top];
}

bool isEmpty(){
   
        return top==-1;
}
bool isFull(){
    
        return top==MAX-1;
}

void display(){
       if(top==-1){
        cout<<"stack is empty"<<endl;
    }
    for(int i=top;i>=0;i--){
        cout<<stack[i]<<"  ";
    }
}
int main(){

    cout<<"welcome to stack manipulation!! please choose your number for operation:-"<<endl;
    cout<<"1-> for push  2-> for pop  "<<endl;
     cout<<"3-> for peek  4-> for isEmpty  "<<endl;
     cout<<"5-> for isFull 6-> for display "<<endl; 
     cout<<"7-> Exit "<<endl;
    
    
   while(choice!=7){

       cout<<endl<<"please enter your choice: ";
       cin>>choice;

       switch(choice){
        case 1:
{
        int value;
        cout<<endl<<"Enter value: ";
        cin>>value;
        if(push(value)){
            cout<<endl<<"element inserted successfully!"<<endl;
        }
        else{
            cout<<"stack overflow";
        }
        break;
    }
        case 2: {
            int popValue=pop();
        if(popValue==-1){
            cout<<"stack is empty cant perform pop operation "<<endl;
        }
        else{

            cout<< popValue <<" is poped out of stack"<<endl;
        }
            break;
    }

        case 3:{
            
            int peekValue=peek();  
        if(peekValue==-1){
            cout<<"stack is empty cant  "<<endl;
        }
        else{
            cout<<"the top element of stack is "<<peek<<endl;
        }
        break;
    }

        case 4: {
            if(isEmpty){
            cout<<"stack is empty"<<endl;
        }
        else{
            cout<<"stack is not empty"<<endl;
        }
        break;
    }
        case 5:{
            
         if(isFull){
            cout<<"stack is full"<<endl;
        }
        else{
            cout<<"stack is not full"<<endl;
        }
        break;
    }
    case 6: display();
    break;

     case 7: cout<<"Exiting...";
     break; 

        default: cout<<"please enter valid choice!";
       }
    }
    return 0;
}