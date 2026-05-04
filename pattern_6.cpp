#include<iostream>
using namespace std;

void print(int n)
{
    int sp=2;
    for(int i=0; i<n ;i++){
    
        //number
        for(int j=1;j<=i;j++){
            cout<<j;
        }

        //space
        for(int j=1;j<=2*n-sp;j++){
            cout<< " "; 
        }
        
        //number
        for(int j=i;j>=1;j--){
            cout<<j;
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

                            //   output
                            //   enter the number of row4
      
                            //         1    1
                            //         12  21
                            //         123321