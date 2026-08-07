//create 5 10 15 20 25

//remove the first element 
//||    the last element
//insert 12 before 15 
//add 30 at the front

#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> d={5,10,15,20,25};

        cout<<endl<<"before"<<endl;

      for(auto x:d){
        cout<<x<<" ";
    }

        d.pop_front();
        d.pop_back();
        d[2]=12;
        d.push_front(30);

        cout<<endl<<"after"<<endl;

      for(auto x:d){
        cout<<x<<" ";
    }
    return 0;
}
//before
// 5 10 15 20 25 
// after
// 30 10 15 12 