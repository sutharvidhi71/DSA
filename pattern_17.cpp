#include<iostream>
using namespace std;

void pattern_17(int n){
 for(int i=0;i<n;i++){

    for(int j=0;j<n-i-1;j++){
        cout<<" ";
    }
    char c='A';
    int breakpoint=(2*i+1)/2;
    for(int j=0;j<i*2+1;j++){
        cout<<c;
        if(j<=breakpoint){
            c++;
        }
        else{
            
            c--;
        }
    }

    for(int j=0;j<n-i-1;j++){
        cout<<" ";

    }
    cout<<endl;
 }
}
int main(){
    int n;
    cout<<"enter number of row: " ;
    cin>>n;
    pattern_17(n);
    return 0 ;
}
