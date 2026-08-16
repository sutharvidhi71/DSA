#include<iostream>
using namespace std;


struct element {
    int value;
    int priority;
};

const int CAPACITY=5;
element pqueue[CAPACITY];
int size=0;

bool isEmpty(){
    return size==0;
}

bool isFull(){
    return size==CAPACITY;
}

bool enqueue(int value,int priority){
if(isFull()){
    return false;
}
    pqueue[size].value=value;
    pqueue[size].priority=priority;
    size++;
    return true;
}

bool dequeue(int* removed){
if(isEmpty()){
    return false;
}
int highestPriority=0;//we will assume first element with highest prio.
for(int i=1;i<size;i++){
    if(pqueue[i].priority>pqueue[highestPriority].priority){
        highestPriority=i;
    }
}
    *removed=pqueue[highestPriority].value;
    for(int i=highestPriority;i<size-1;i++){
        pqueue[i]=pqueue[i+1];
    }
    size--;
    return true;
}

bool peek(int* result){
    if(isEmpty())
    {
        return false;
    }
   int highestPriority=0;
   for(int i=1;i<size;i++){
    if(pqueue[i].priority>pqueue[highestPriority].priority){
        highestPriority=i;
    }
}
*result=pqueue[highestPriority].value;
    return true;
}
bool display(){
    if(isEmpty()){
        return false;
    }
    for(int i=0;i<size;i++){
        cout<<"element "<<i+1<<": value- "<<pqueue[i].value
            <<" , priority- "<<pqueue[i].priority<<endl<<endl;
       
    }
    return true;
}
int main(){
cout<<" welcome to unsorted priority queue operations: "<<endl;

cout<<"is queue empty?- "<<isEmpty()<<endl;

cout<<"element inserted?- "<<enqueue(10,1)<<endl;
cout<<"element inserted?- "<<enqueue(20,3)<<endl;
cout<<"element inserted?- "<<enqueue(50,5)<<endl;
cout<<"element inserted?- "<<enqueue(30,2)<<endl;

cout<<"*queue*----"<<endl;
if(!display()){
    cout<<"queue is empty unable to display-"<<endl;
}
int result=0;
if(peek(&result)){
    cout<<"top priority element is: "<<result<<endl;
}
if(dequeue(&result)){
    cout<<"removed element is: "<<result<<endl;
}
if(!display()){
    cout<<"queue is empty unable to display-"<<endl;
}
return 0;
}

//  welcome to unsorted priority queue operations: 
// is queue empty?- 1
// element inserted?- 1
// element inserted?- 1
// element inserted?- 1
// element inserted?- 1
// *queue*----
// element 1: value- 10 , priority- 1

// element 2: value- 20 , priority- 3

// element 3: value- 50 , priority- 5

// element 4: value- 30 , priority- 2

// top priority element is: 50
// removed element is: 50
// element 1: value- 10 , priority- 1

// element 2: value- 20 , priority- 3

// element 3: value- 30 , priority- 2