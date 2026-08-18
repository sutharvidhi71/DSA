#include<iostream>
using namespace std;

const int SIZE=10;
int heap[SIZE]={60,50,40,30,20,35,10};
int size=7;


bool enqueue(int value){
    if(size==SIZE){
        return false;
    }
    int i=size;
    heap[i]=value;
    size++;

    
    while(i>0){

        int parent=(i-1)/2;
        if(heap[i]<heap[parent]){
            break;
        }
        swap(heap[i],heap[parent]);
        i=parent;
    }
    return true;
}
int main(){
    cout<<"before insertion of 55"<<endl;

    for(int i=0;i<size;i++){
        cout<<"at "<< i<< " value:"<<heap[i]<<endl;
    }

    enqueue(55);
 cout<<"after insertion of 55"<<endl;

    for(int i=0;i<size;i++){
        cout<<"at "<< i<< " value:"<<heap[i]<<endl;
    }
    return 0;
}

// output----------
// before insertion of 55
// at 0 value:60
// at 1 value:50
// at 2 value:40
// at 3 value:30
// at 4 value:20
// at 5 value:35
// at 6 value:10
// after insertion of 55
// at 0 value:60
// at 1 value:55
// at 2 value:40
// at 3 value:50
// at 4 value:20
// at 5 value:35
// at 6 value:10
// at 7 value:30

//trust me if you want to implement this max heap you have to fists 
//understand the concept of heap . so go ask chatGPT to give you good explaination
//write down what you understand in your word in note book

//i would like to explain it but it to much and complex to expllain 

//but still i would like to explain the position switing of 55 in my word.

//so we allready had 7 element in heap so we initialise size to 7
// then we can enqueue and inserted element 55
//so for first any element that comes in heap stores at the last available 
//index 

// please try to understand 

// ex- capacity=10;
//     size = 7

//     will we store element at capasity-1 ?
//         no because we still have space right begind last element 

//     thats why we used int i=size;
//                       heap[i]=value;
    
// than we increase size by one 

// and heare comes importent loop which will justify property of max heap
//         parent>=child

// we use while loop with condition i>0 
// because we are going to find parent by using i since root index is 0 and it does
// not have parent it will creates priblem 

// then we willfind respective parent index by using formula

// int parent =(i-1)/2 it for heap to find parent note of any node 

// then we will compare both parent and child 
// if child is smaller and equal to there is no need of swith we brack through loop
// imidiatly

// if not we will swap them
//             swap(heap[i],heap[parent]);

// then our newly added element take place of it parent so we have to update its element to 
//   i=parent

//   it will continue until element restore itself to correct position 

// ---------------noooowwwww lets dry run it----------------- 

// {heap}== 0      1      2      3      4      5      6      7        8        9       10
//         60      50     40    30       20    35     10 

// 1 round :initial position of 55
//          i=size means index 7
//          parent =(i-1)/2
//                 =(7-1)/2
//                 =3 index contains element 30

//         is 55>30 yes !!
//         they swap now 55 index become 3
//          0      1      2      3      4      5      6      7        8        9       10
//         60      50     40    55       20    35     10     30 


// 2 round :i=3
//          parent =(i-1)/2
//                 =(3-1)/2
//                 =1 index contains element 50
//                 is 55>50 yes !!
//         they swap now 55 index become 1
//          0      1      2      3      4      5      6      7        8        9       10
//         60      55     40    50       20    35     10     30 

// 2 round :i=1
//             parent=(i-1)/2
//                 =(1-1)/2
//                 =0 index contains element 60
//                 is 55>60 noo 

//                 so the loop stops thre
