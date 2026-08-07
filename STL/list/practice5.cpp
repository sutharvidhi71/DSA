// Create
// 10 20 40
// Insert
// 30
// using an iterator.
// Expected output
// 10 20 30 40
#include<iostream>
#include<list>
using namespace std;
int main(){
   list<int> l={10,20,40};
   auto it=l.begin();
    it++;
    it++;
    l.insert(it,30);
    for(auto x:l){
        cout<<x<<" ";
    }
    return 0;
}
//10 20 30 40 