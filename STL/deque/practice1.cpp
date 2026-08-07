// Create 10 20 30
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
    d.push_front(5);
    d.push_front(15);
    d.push_front(25);

    d.emplace_front(1);

    for(auto x:d){
        cout<<x<<" "<<endl;
    }
        cout<<endl;
    d.pop_back();
    d.pop_front();

      for(auto x:d){
        cout<<x<<" ";
    }
    cout<<"using front() "<<d.front()<<endl;
    cout<<"using back() "<<d.back()<<endl;
    cout<<"using d[] "<<d[2]<<endl;

    return 0;
}
// 1 
// 25 
// 15 
// 5 
// 10 
// 20 
// 30 

// 25 15 5 10 20 using front() 25
// using back() 20
// using d[] 5