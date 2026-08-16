#include<iostream>
using namespace std;

const int SIZE=5;
int queue[SIZE]={};
int front=-1,rear=-1;

bool dequeue (int* value){
    if(front==-1){
        return false;
    }
    if(front==rear){
            *value=queue[front];
            front=-1;
            rear=-1;
            return true;
    }
    *value=queue[front];
    front=(front+1)%SIZE;
    return true;
}

bool isEmpty(){
return front==-1;
}

bool isFull(){
return ((rear+1)%SIZE)==front;
}

bool enqueue(int value){
    if((rear+1)%SIZE==front){
        return false;
    }
    
    if(front == -1 && rear == -1){
            front=0;
            rear=0;
           
            queue[rear]=value;
            return true;
    }
        rear=(rear+1)%SIZE;
        queue[rear]=value;
        return true;
}

bool display(){
    if(isEmpty()){
        return false;
    }
    for(int i=front;;i=(i+1)%SIZE){
        if(i==rear){
            return true;
        }
        cout<<queue[i]<<" ";
    }
    return true;
}
int main(){
    int choice;
        cout<<"circuler queue operation "<<endl;
        cout<<"1 for enqueue "<< "2 for dequeue "<<endl;
        cout<<"3 for isEmpty  "<<"4 for isFull "<<endl;
        cout<<"5 for display "<<"6 for exite "<<endl;
       
    do{
 cout<<"please enter your choice"<<endl;
        cin>>choice;
        cout<<endl;
         switch (choice)
            {
            case 1: {
                int value;
                cout<<"enter value to insert: ";
                cin>>value;
                if( enqueue(value)){
                    cout<<endl<<"element inserted successfuly:"<<endl;
                }
                else{
                    cout<<endl<<"circuler queue is full:"<<endl;
                }
            }
                break;
            
                  case 2: {
                    int value=0;
                
                    if(dequeue(&value)){
                        cout<<"element "<<value<<" removed successfuly"<<endl;
                    }
                    else{
                        cout<<"circuler queue is empty"<<endl;
                    }
                  }
                break; 
                 case 3: {
                    if(isEmpty()){
                        cout<<"circuler queue is empty"<<endl;
                    }
                    else{ 
                        cout<<"circuler queue is not empty"<<endl;
                        }
                 }
                break; 
                 case 4:{
                    if(isFull()){
                        cout<<"circuler queue is full"<<endl;
                    }
                    else{
                        cout<<"circuler queue is not full"<<endl;
    
                    }
                 } 
                break;
                  case 5:{ 
                    if(!display()){
                    cout<<"queue is empty cant print anything:"<<endl;
                  }
                }
                break;
     
                case 6: cout<<"exiting...";
                break;
                default:cout<<"please enter valide choice"<<endl;
                break;
            }
    } while(choice!=6);
       

        

    return 0;
}