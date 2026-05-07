#include<iostream>
using namespace std;

void pattern_14(int n){
    for(int i=0;i<n;i++){
        for(char c='A'; c <='A'+i;c++){
            cout<<c;
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cout<<"Enter the number of pattern";
    cin>>t;
    while(t){

        int n;
        cout<<"enter number of row: " ;
        cin>>n;
        pattern_14(n);
        t--;
    }
        return 0 ;
}
// ----------output----------
// Enter the number of pattern: 3
// enter number of row: 3
// A
// AB
// ABC
// enter number of row: 4
// A
// AB
// ABC
// ABCD
// enter number of row: 5
// A
// AB
// ABC
// ABCD
// ABCDE