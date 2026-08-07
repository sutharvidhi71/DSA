#include<iostream>
using namespace std;
void insert(int pos, int value,int* n,int arr[],int capacity){

    if(*n==capacity){
        cout<<"cant insert value array at it limit "<<endl;
       exit(1);
    }
    for(int i=(*n)+1;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=value;
    (*n)++;
    cout<<"the element "<<value<<" is inserted at the index "<<pos<<endl;
     cout<<"array element after insertion operation"<<endl;
     for(int i=0;i<*n;i++){
        cout<<arr[i]<<"  ";
    }
}
int main(){
    int arr[10]={10,20,30,50};
    int n=4,pos,value;

    cout<<"initial element of array"<<endl;
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    cout<<endl<<"enter position and value that you want to insert element at"<<endl;
    cin>>pos;
    cin>>value;
    insert(pos,value,&n,arr,(sizeof(arr)/sizeof(arr[0])));

    cout<<"after insertion: "<<endl;
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        cout<<arr[i]<<"  ";
    }
    return 0;
}