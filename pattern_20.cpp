#include<iostream>
using namespace std;

void pattern_20(int n){
   int space=2*n-2;
   
   for(int i=0;i<n*2-1;i++){
       int stars=i;
       if(i>n)stars=n*2-i;
       
       for(int j=0;j<stars;j++){
           cout<<"*";
       }
       for(int j=0;j<space;j++){
           cout<<" ";
       }
        for(int j=0;j<stars;j++){
           cout<<"*";
       }
       if(i<n){
           space-=2;
       }
       else {
           space+=2;
       }
       cout<<endl;
   }
}
int main(){
    int n;
    cout<<"enter number of row: " ;
    cin>>n;
    pattern_20(n);
    return 0 ;
}
