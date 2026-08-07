//Start with
// 10 20 30 40

// Perform
// pop_front();
// pop_back();

// Expected output
// 20 30

#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l={10,20,30,40};

        cout<<"before: "<<endl;

    for(auto x:l){
        cout<<x<<" ";
    }
    l.pop_front();
    l.pop_back();

    cout<<endl<<"after: "<<endl;
    for(auto x:l){
        cout<<x<<" ";
    }
    return 0;
}
//output------
// before: 
// 10 20 30 40 
// after: 
// 20 30 