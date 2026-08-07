//store element 100 200 300 with exact same order with puh_front 

#include<iostream>
#include<list>
using namespace std;
int main(){
   list<int> l;


    l.push_front(300);
    l.push_front(200);
    l.push_front(100);
    
    for(auto x:l){
        cout<<x<<" ";
    }
    return 0;
}
//output-----
//100 200 300 
