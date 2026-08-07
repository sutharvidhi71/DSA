#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_back(40);

    cout<<"before"<<endl;
          for(auto x:d){
        cout<<x<<" ";
    }
    auto it=d.begin()+2;
    d.insert(it,30);

    cout<<endl<<"after"<<endl;

      for(auto x:d){
        cout<<x<<" ";
    }
    return 0;
}
//output--------
//before
// 10 20 40 
// after
// 10 20 30 40 