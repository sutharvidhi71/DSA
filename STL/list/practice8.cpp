// Create 5 10 15 20 25

// Now
// Delete 10
// Insert 12 before 15
// Add 30 at the end
// Add 1 at the beginning

// Expected output
// 1 5 12 15 20 25 30
#include<iostream>
#include<list>
using namespace std;
int main(){
   list<int> l={5,10,15,20,25};

    auto it=l.begin();
    it++;
    it++;
  l.insert(it,12);
    l.push_back(30);
    l.push_front(1);

       for(auto x:l){
        cout<<x<<" ";
    }
    return 0;
}
//output-------
//1 5 10 12 15 20 25 30 