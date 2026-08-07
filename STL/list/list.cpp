#include<iostream>
#include<list>
using namespace std;
int main(){
    list<string> li={"hello","guys","what","are","you","doing","?"};
    for (auto it = li.begin(); it != li.end(); it++)
    {
       cout<<*it<<" ";    
    }
    
    return 0;
}
//hello guys what are you doing ? 
