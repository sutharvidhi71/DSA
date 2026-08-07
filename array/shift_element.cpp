 #include<iostream> 
using namespace std;

void addElement (int element , int position,int array[],int* current_num_element,int capacity){
for(int i=(*current_num_element)-1;i>position;i--){
    array[i]=array[i-1];
}
array[position]=element;
(*current_num_element)++;
}

int main(){
    int array[5]={1,2,3,5};
    int element,position,n=0;

    
    for(int i=0;array[i]!=0;i++){
        n++;
    }

    cout<<"before shifting:  ";
    for(int i=0;i<n;i++){//logic to calculate current number of element 
        cout<<array[i]<<"  ";//i know it will only work for the array that do not contain 0
    }

    cout<<endl<<"current number of element "<<n<<endl;
    
    cout<<"please enter element and position at which you want to add accourdingly"<<endl;
    cin>>element;
    cin>>position;
    
    addElement(element,position,array,&n,sizeof(array)/sizeof(array[0]));

    cout<<"after adding and shifting of element:  ";

    for(int i=0;i<n;i++){
        cout<<array[i]<<"  ";
    }

    return 0;
}
//output-------
// before shifting:  1  2  3  5  
// current number of element 4
// please enter element and position at which you want to add accourdingly
// 4
// 3
// after adding and shifting of element:  1  2  3  4  5  

//took me more than 3 hours to finish this program after fully understandoing it.
//had to go through whole revision of cpp low level understanding for that😮‍💨😮‍💨