#include<iostream>
using namespace std;

void print(int n)
{
    int star=1;
    for(int i=0; i<n ;i++){
        star = (i%2 == 0)? 0 : 1;
        for(int j=0 ; j<=i ;j++){
            cout<<star;
       
            
        }

        cout<<endl;
    }
}
int main ()
{
    int n;
    cout<<"enter the number of row";
    cin>>n ;    
        print(n);

    return 0;
}