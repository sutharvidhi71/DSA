#include <iostream>
using namespace std;
int main() {
   int arr[4]={100,-1,0,50};
   int pos,update_value;
cout<<endl<<"before update: ";
for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
{
    cout<<arr[i]<<" ";
}
   
cout<<endl<<"please enter position and value to update array: "<<endl;
cin>>pos;
cin>>update_value;


arr[pos]=update_value;

cout<<endl<<"after update: ";
for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
{
    cout<<arr[i]<<" ";
}
    return 0;
}
//output-------

// before update: 100 -1 0 50 
// please enter position and value to update array: 
// 2
// 17

// after update: 100 -1 17 50 

// === Code Execution Successful ===