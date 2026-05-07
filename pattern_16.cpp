#include<iostream>
using namespace std;

void pattern_16(int n){
 char c='A';
    for(int i=1;i<=n;i++){
     
        for(int j=1;j<=i;j++){
            cout<<c;
        }
     
        cout<<endl;
        c++;
    }
}
int main(){
    int n;
    cout<<"enter number of row: " ;
    cin>>n;
    pattern_16(n);
    return 0 ;
}
// enter number of row: 5
// A
// BB
// CCC
// DDDD
// EEEEE