//Create 10 20 30 40 50
// Delete 30
// using an iterator.
// Expected output
// 10 20 40 50
#include<iostream>
#include<list>
using namespace std;
int main(){
   list<int> l={10,20,20,40,50};
   auto it=l.begin();
   it++;
   it++;
    l.erase(it);
    for(auto x:l){
        cout<<x<<" ";
    }
    return 0;
}
//10 20 40 50 