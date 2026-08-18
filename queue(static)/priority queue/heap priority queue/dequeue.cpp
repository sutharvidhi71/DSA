#include<iostream>
using namespace std;

const int SIZE=10;

struct element {
    int value;
    int priority;
};

element heap[SIZE];
int size=0;

bool enqueue(int value,int priority){
    if(size==SIZE){
        return false;
    }
    int i=size;
    heap[i].value=value;
    heap[i].priority=priority;
    size++;

    while(i>0){
        int parent =(i-1)/2;
        if(heap[i].priority<=heap[parent].priority){
            break;
        }
        swap(heap[i],heap[parent]);
        i=parent;
    }
    return true;
}

bool dequeue(int* result){
    if(size==0){
        return false;
    }
    *result=heap[0].value;
    heap[0]=heap[size-1];
    size--;

    int i=0;
    while(true){
        int left=(i*2)+1;
        int right=(i*2)+2;
        if(left>=size){
            break;
        }
        int largerChild=left;

        if(right<size && heap[right].priority>heap[left].priority){
            largerChild=right;
        }

        if(heap[i].priority>=heap[largerChild].priority){
            break;
        }

        swap(heap[i],heap[largerChild]);
        i=largerChild;
    }
    return true;
}

bool display(){
      if(size==0){
        return false;
    }
    for(int i=0;i<size;i++){
        cout<<"element: "<<i+1<<" value:"<<heap[i].value
                              <<" , priority:"<<heap[i].priority<<endl;
    }
    return true;
}
int main(){
    int result=0;
    enqueue(50,5);
    enqueue(40,3);
    enqueue(30,4);
    enqueue(10,7);
    enqueue(100,6);
    cout<<"before dequeue operation"<<endl;
if(!display()){
    cout<<"empty queue"<<endl;
}


if(dequeue(&result)){
    cout<<"removed element is "<<result<<endl;
}

cout<<"after dequeue operation"<<endl;
if(!display()){
    cout<<"empty queue"<<endl;
}
return 0;
}