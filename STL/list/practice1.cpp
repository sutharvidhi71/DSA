// Create a list and print it.

// Expected output

// 10 20 30 40 50

// Add five elements

// Print using range-based for loop

#include<iostream>
#include<list>
using namespace std;

int main(){

    list<int> l;

    l.push_front(50);
    l.push_front(40);
    l.push_front(30);
    l.push_front(20);
    l.push_front(10);

    for(auto x:l){
        cout<<x<<" ";
    }

    return 0;
}

//output--------
//10 20 30 40 50 