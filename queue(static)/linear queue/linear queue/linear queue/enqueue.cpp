#include<iostream>
using namespace std;

const int SIZE=5;
int queue[SIZE]={};
int front=-1,rear=-1;

bool enqueue(int value){
    if(rear==SIZE-1){
        return false;
    }
        if(front==-1 && rear==-1){
            front=0;
            rear=0;
            queue[rear]=value;
            return true;
        }
        queue[++rear]=value;
        return true;
}
int main(){

cout<<(enqueue(10)?"succefuly enqueued ":"queue is full");
cout<<endl;

cout<<(enqueue(20)?"succefuly enqueued ":"queue is full");
cout<<endl;

cout<<(enqueue(30)?"succefuly inqueued ":"queue is full");
cout<<endl;

cout<<(enqueue(40)?"succefuly enqueued ":"queue is full");
cout<<endl;

cout<<(enqueue(50)?"succefuly enqueued ":"queue is full");
cout<<endl;

cout<<(enqueue(60)?"succefuly enqueued ":"queue is full");
cout<<endl;

    return 0;
}
//output-------------
// succefuly inqueued 
// succefuly inqueued 
// succefuly inqueued 
// succefuly inqueued 
// succefuly inqueued 
// queue is full
//VERY IMPORTENT THING WHICH ARE THE KEY POINTS TO IMPLEMENT enqueue
// 1)first check if queue is full if(rear==SIE-1) yes then retun false.

// 2)check if these the first element to be indserted if(rear==-1 && front==-1)
//      than assing both with 0 than queue[rear]=value return true.

//3) if non of above proceed usuall queue[++rear]=value return true.
