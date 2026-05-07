//this is the my favourite pattern out of all 
//it includes ASCII arithmatics and i love it
//and it is also my first time claring problem at first try without any error🤭
#include<iostream>
using namespace std;

//the logic in this practical is computer dont proccess over charactor direct
//it convert them into ASCII(Americal standerd Code for Information Interchange)code then bunary 
//in ASCII 67 to 90 numbers are allocated for 'A to Z' character
// there for c='A'(67) then c++;(68)--> c='B'
void pattern_14(int n){
    char c='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<c++;
        }
        c='A';
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
// ---------output----------
           
// enter number of row: 5
// A
// AB
// ABC
// ABCD
// ABCDE