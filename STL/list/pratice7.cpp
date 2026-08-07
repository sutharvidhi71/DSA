// Create 10 20 30 40 50
// Without using reverse(),

// print the list backwards.
// Expected output 50 40 30 20 10
#include<iostream>
#include<list>
using namespace std;
int main(){
       list<int> l={10,20,30,40,50};
        for(auto it=l.rbegin();it!=l.rend();it++){
            cout<<*it<<" ";
        }
    
    return 0;
}
//50 40 30 20 10 