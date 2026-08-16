#include<iostream>
using namespace std;
const int SIZE=5;
int queue[SIZE]={1,2,3};
int front=0,rear=2;

int dequeue()
{
    if(front==-1 || rear==-1){
        return -0;
    }
    int popped=queue[front];

    if(front==rear){
        front=-1;
        rear=-1;
    }
    else{
        front++;
    }
    return popped;
}
int main(){

int popped=dequeue();
if(popped==-0){
    cout<<"queue is empty:"<<endl;
}
else{
    cout<<popped<<" popped out of queue: "<<endl;
}

 popped=dequeue();
if(popped==-0){
    cout<<"queue is empty:"<<endl;
}
else{
    cout<<popped<<" popped out of queue: "<<endl;
}

 popped=dequeue();
if(popped==-0){
    cout<<"queue is empty:"<<endl;
}else{
    cout<<popped<<" popped out of queue: "<<endl;
}

 popped=dequeue();
if(popped==-0){
    cout<<"queue is empty:"<<endl;
}else{
    cout<<popped<<" popped out of queue: "<<endl;
}
    return 0;
}

//output-------------
// 1 popped out of queue: 
// 2 popped out of queue: 
// 3 popped out of queue: 
// queue is empty:

//VERY IMPORTENT THING WHICH ARE THE KEY POINTS TO IMPLEMENT DEQUEUE
//<1> FIRST CHECK IF QUEUE IS EMPTYIF YES RETURN.

//<2> IF NOT SAVE FRONT ELEMENT INTO VARIABLE ,WHY BECAUSE ITS GOING TO POPPED OUT 
//  SO WE HAVE TO RETURN IT .

//<3> THEN CHECK IF FRONT AND REAR ARE ON SAME INDEX IF YES MEANS THERE IS ONLY ONE ELEMENT IS
// LEFT SO WE WILL ASSING FRONT=REAR=-1 . BECAUSE AFTER THIS DEQUEUE QUEUE WILL BE EMPTY.

//<4> IF NOT THAT TOO PROCEED NOTMLY BY INCREASING FRONT BY ONE .
