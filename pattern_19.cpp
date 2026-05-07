#include<iostream>
using namespace std;

void pattern_19(int n){
 for(int i=0;i<n;i++){
    
    for(int j=0;j<n-i;j++){
        cout<<"*";
    }

    for(int j=0;j<i*2;j++){
        cout<<" ";
    }

     for(int j=0;j<n-i;j++){
        cout<<"*";
    }
    cout<<endl;
}
int space=(n*2)-2;

for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        cout<<"*";
    }

    for(int j=0;j<space;j++){
        cout<<" ";
    }
     for(int j=0;j<=i;j++){
        cout<<"*";
    }
    space-=2;
    cout<<endl;
}
}
int main(){
    int n;
    cout<<"enter number of row: " ;
    cin>>n;
    pattern_19(n);
    return 0 ;
}
// -----------output---------
// enter number of row: 5
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********