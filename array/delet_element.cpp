#include<iostream>
using namespace std;

void delet(int pos,int arr[],int capacity,int* size){
    if(*size==0){
        cout<<"array is empty cant remove any element"<<endl;
     
    }

    for(int i=pos;i<(*size)-1;i++){
        arr[i]=arr[i+1];
    }
    arr[(*size)-1]=0;
    (*size)--;
   
}
int main(){

    int n=0,pos;
    int arr[5]={1,2,3,4,5};
    cout<<"before deletion: "<<endl;
     for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        cout<<arr[i]<<"  ";
    } 
      for(int i=0;arr[i]!=0;i++){
        n++;
    }

    cout<<endl<<"enter the position of element you want to delet: "<<endl;
    cin>>pos;
    
    delet(pos,arr,(sizeof(arr)/sizeof(arr[0])),&n);
    
    cout<<endl<<"After deletion:"<<endl;
      for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        cout<<arr[i]<<"  ";
    } 
    return 0;
}
//output
// before deletion: 
// 1  2  3  4  5  
// enter the position of element you want to delet: 
// 3

// After deletion:
// 1  2  3  5  0  