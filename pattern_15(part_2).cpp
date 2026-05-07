#include<iostream>
using namespace std;

void pattern_15_p2(int n){
    for(int i=n;i>=1;i--){
        for(char c='A';c<='A'+(i-1);c++){
            cout<<c;
        }
        
        cout<<endl;
    }
}

int main(){
    int t,n;
    cout<<"Enter the number of patterns: ";
    cin>>t;

    while(t){
        cout<<"Enter the number of row";
        cin>>n;
        pattern_15_p2(n);
        t--;
    }
    return 0;
}
       
// ---------output-----------
// Enter the number of patterns: 1
// Enter the number of row5
// ABCDE
// ABCD
// ABC
// AB
// A