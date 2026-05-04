#include<iostream>
using namespace std;

void print(int n)
{
    int sp=2;
    for(int i=0; i<n ;i++){

        //character     
        for(int j=0;j<=n-i-1;j++){

            cout<<" ";
        }

        //space
        char ch='A';
        int breakpoint=(2*i+1)/2;
        for(int j=0;j<=2*i+1;j++){
            if(j<= breakpoint) ch++;
            else ch--;
            cout<< ch; 
        }
        
        //character
         for(int j=0;j<=n-i-1;j++){

            cout<<" ";
        }
        cout<<endl;
}
}
int main(){
    int n;
    cout<<"enter the number of row";
    cin>>n ;    
        print(n);

    return 0;
}
