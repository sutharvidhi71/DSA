// Create 10 20 30 40
// Now create an iterator.

// Move it to 30

// Print only 30

#include<iostream>
#include<list>
using namespace std;
int main(){
   
    list<int> l={10,20,30,40};
    auto it=l.begin();
    // auto it=l.begin()+2; why cant we use this same as vector??
    it++;  
    it++;  

  cout<<*it;
    return 0;
}
 //30
