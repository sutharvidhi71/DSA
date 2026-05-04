#include<iostream>
using namespace std;

void pattern(int n){

for(int i=0;i<n;i++){

        for(int j;j<=i;j++){
            cout<<"*";
        }
}
for(int i=0;i<n-1;i++){

        for(int j;j<=i;j++){
            cout<<"*";
        }
}

}
void demo(int n){
    for(int i=0;i>n-1;i++){
        int star=i;
        if(i>n)
        {
             star=2*n - i;
        }
        
        for(int j=0;j<=star;i++){
            cout<<"*";

        }
        cout<<endl;
    }
}

int main ()
{
    int n;
    cout<<"enter the number of row";
    cin>>n ;    
        demo(n);

    return 0;
}