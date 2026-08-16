#include<iostream>
using namespace std;

const int capacity=5;
int size=0;
struct element{
    int value;
    int prioprity;
};

element pq[capacity];

bool isEmpty(){
    return size==0; 
}
bool isFull(){
    return size==capacity;
}

bool peek(int* result){
     if(isEmpty()){
        return false;
    }
    *result=pq[0].value;
    return true;
}
bool enqueue(int value , int priority){
    if(isFull()){
        return false;
    }
    if(size==0){
        pq[size].value=value;
        pq[size].prioprity=priority;
        size++;
        return true;
    }
    int position=size;
    for(int i=0;i<size;i++){
        if(pq[i].prioprity<priority){
            position=i;
            break;
        }
    }
    for(int i=size;i>position;i--){
        pq[i]=pq[i-1];
    }
    pq[position].value=value;
    pq[position].prioprity=priority;
    size++;
    return true;
}

bool dequeue(int *result){
 if(isEmpty()){
    return false;
 }
    *result=pq[0].value;
    for(int i=0;i<size-1;i++){
        pq[i]=pq[i+1];
    }
    size--;
    return true;
}

bool display(){
      if(isEmpty()){
        return false;
    }
    for(int i=0;i<size;i++){
        cout<<"element: "<<i+1<<" value:"<<pq[i].value
                              <<" , priority:"<<pq[i].prioprity<<endl;
    }
    return true;
}
int main (){

    int result=0;
    cout<<"welcome to sorted priority queue operations- "<<endl;
    cout<<"in answer(return value) 1 means true 0 means false "<<endl;
    
    cout<<"is queue empty "<<isEmpty()<<endl;

    cout<<"element added successfuly? - "<<enqueue(100,5)<<endl;
    cout<<"element added successfuly? - "<<enqueue(0,4)<<endl;
    cout<<"element added successfuly? - "<<enqueue(40,3)<<endl;
    cout<<"element added successfuly? - "<<enqueue(20,1)<<endl;
    cout<<"element added successfuly? - "<<enqueue(50,2)<<endl<<endl;

    if(!display()){
        cout<<"queue is empty-"<<endl;
    }

    if(!dequeue(&result)){
        cout<<"queue is empty-"<<endl;
    }
    else{
        cout<<"removed element is: "<<result<<endl;
    }

    if(!peek(&result)){
        cout<<"cant display element queue is empty"<<endl;
    }
    else{
        cout<<"peek element of queue is: "<<result<<endl;
    }

    
    if(!dequeue(&result)){
        cout<<"queue is empty-"<<endl;
    }
    else{
        cout<<"removed element is: "<<result<<endl;
    }

    cout<<"queue after dequeue:-"<<endl;
       if(!display()){
        cout<<"queue is empty-"<<endl;
    }
    return 0;
}

// welcome to sorted priority queue operations- 
// in answer(return value) 1 means true 0 means false 
// is queue empty 1
// element added successfuly? - 1
// element added successfuly? - 1
// element added successfuly? - 1
// element added successfuly? - 1
// element added successfuly? - 1

// element: 1 value:100 , priority:5
// element: 2 value:0 , priority:4
// element: 3 value:40 , priority:3
// element: 4 value:50 , priority:2
// element: 5 value:20 , priority:1
// removed element is: 100
// peek element of queue is: 0
// removed element is: 0
// queue after dequeue:-
// element: 1 value:40 , priority:3
// element: 2 value:50 , priority:2
// element: 3 value:20 , priority:1