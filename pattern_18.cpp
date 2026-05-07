#include<iostream>
using namespace std;

void pattern_18(int n){
 for(int i=0;i<n;i++){
    
    for(char c='E'-i;c<='E';c++){
        cout<<c;
    }cout<<endl;
 }
    
}
int main(){
    int n;
    cout<<"enter number of row: " ;
    cin>>n;
    pattern_18(n);
    return 0 ;
}
