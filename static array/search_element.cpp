#include<iostream>
using namespace std;

void byValue(int arr[],int size){
    int value,found=0;
    cout<<"enter the value: ";
    cin>>value;
    for(int i=0;i<size;i++){
        if(arr[i]==value){
            cout<<endl<<"element "<<value<<" found at index "<<i;
            found=1;
        }
       
    }
    if(!found){
                    cout<<endl<<"element not found";

    }
}

void byIndex(int arr[],int size){
    int ind;
    cout<<"enter index by which you want to find element: ";
    cin>>ind;
    if(ind<0 || ind>=size){
        cout<<endl<<"please enter valid index ";
    }
    else{
        cout<<endl<<"element at the index "<<ind<< " is "<<arr[ind];
    }
}
int main(){
    int choice;
    int arr[5]={14,3,3,2,1};
    cout<<"enter method of search 1 for by index 2 for by value: ";
    cin>>choice;

        switch(choice){
            case 1: byIndex(arr,(sizeof(arr)/sizeof(arr[0])));
            break;

            case 2: byValue(arr,(sizeof(arr)/sizeof(arr[0])));
            break;

            default:cout<<"PLease neter valid choice ";
        };

    return 0;
}