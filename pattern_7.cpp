#include<iostream>
using namespace std;

void print(int n)
{
    int sp=2;
    for(int i=0; i<n ;i++){
    
        //character
        for(char ch='A';ch+=i;ch++){
            cout<<ch;
        }

        //space
        for(int j=1;j<=2*n-sp;j++){
            cout<< " "; 
        }
        
        //character
        for(char ch='A';ch+=1;ch++){
            cout<<ch;
        }
        cout<<endl;
        sp+=2;
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
