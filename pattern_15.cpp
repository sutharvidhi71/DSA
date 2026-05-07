#include<iostream>
using namespace std;

void pattern_14(int n){
 
    for(int i=5;i>=1;i--){
        char c='A';
        for(int j=1;j<=i;j++){
            cout<<c++;
        }
     
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter number of row: " ;
    cin>>n;
    pattern_14(n);
    return 0 ;
}
// -------output-------
// enter number of row:
// ABCDE
// ABCD
// ABC
// AB
// A