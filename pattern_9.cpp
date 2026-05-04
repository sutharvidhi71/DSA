#include<iostream>
using namespace std;

void print(int n)
{
    
    char ch='E';
    for(int i=0; i<n ;i++){
        for(int j=0; j<=i ; j++){
            cout<<(char)ch+i;
           
        }
 cout<<endl; 
 ch++;      
}
}
int main(){
    int n;
    cout<<"enter the number of row";
    cin>>n ;    
        print(n);

    return 0;
}
