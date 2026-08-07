// Create
// 10 20 30
// using push_back().
// Print it.

#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);

      for(auto x:d){
        cout<<x<<" ";
    }
    return 0;
}
//10 20 30