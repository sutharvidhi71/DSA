#include<iostream>
#include<vector>
using namespace std;
int main(){
    //vector<int> v={1,2,3,4,5,6,7}; initiate vector

    vector<int > v;//declare vector
    v.push_back(10);//assign element to vector
    cout<<"first input"<<endl;
     cout<<"size of vector: "<<v.size()<<endl;
    cout<<"capacity of vector: "<<v.capacity()<<endl<<endl;
    v.push_back(20);
        cout<<"second input"<<endl;

     cout<<"size of vector: "<<v.size()<<endl;
    cout<<"capacity of vector: "<<v.capacity()<<endl<<endl;
    v.push_back(30);
        cout<<"third input"<<endl;

     cout<<"size of vector: "<<v.size()<<endl;
    cout<<"capacity of vector: "<<v.capacity()<<endl<<endl;
    v.push_back(40);
        cout<<"fourth input"<<endl;

     cout<<"size of vector: "<<v.size()<<endl;
    cout<<"capacity of vector: "<<v.capacity()<<endl<<endl;
    v.push_back(50);
        cout<<"fifth input"<<endl;

     cout<<"size of vector: "<<v.size()<<endl;
    cout<<"capacity of vector: "<<v.capacity()<<endl<<endl;
    v.push_back(60);//assign element to vector
        cout<<"sixth input"<<endl;

     cout<<"size of vector: "<<v.size()<<endl;
    cout<<"capacity of vector: "<<v.capacity()<<endl<<endl;
    v.push_back(70);
        cout<<"seventh input"<<endl;

     cout<<"size of vector: "<<v.size()<<endl;
    cout<<"capacity of vector: "<<v.capacity()<<endl<<endl;
    v.push_back(80);
        cout<<"eight input"<<endl;

     cout<<"size of vector: "<<v.size()<<endl;
    cout<<"capacity of vector: "<<v.capacity()<<endl<<endl;
    v.push_back(90);
        cout<<"ninth input"<<endl;

     cout<<"size of vector: "<<v.size()<<endl;
    cout<<"capacity of vector: "<<v.capacity()<<endl<<endl;
    v.push_back(100);
        cout<<"tenth input"<<endl;

     cout<<"size of vector: "<<v.size()<<endl;
    cout<<"capacity of vector: "<<v.capacity()<<endl<<endl;

    cout<<"printing fist element using front function: "<<v.front()<<endl;
    cout<<"printing last element using back function: "<<v.back()<<endl;
  cout<<"using normal for loop "<<endl;
    for(int i=0;i<v.size();i++){
cout<<v[i]<<" ";
    }
cout<<endl<<"using range wise for loop "<<endl;
for(auto r:v){
    cout<<r<<" ";
}

cout<<endl<<"traversing using iterater "<<endl;
for(auto it=v.begin();it!=v.end();it++){
    cout<<*it<<" ";
}


// cout<<"reverse vectore using rbegin() and rend() ";
// for(auto it=rbegin();it!=rend();it++){
//     cout<<*it<<" ";
// }
    return 0;
}
//first input
// size of vector: 1
// capacity of vector: 1

// second input
// size of vector: 2
// capacity of vector: 2

// third input
// size of vector: 3
// capacity of vector: 4

// fourth input
// size of vector: 4
// capacity of vector: 4

// fifth input
// size of vector: 5
// capacity of vector: 8

// sixth input
// size of vector: 6
// capacity of vector: 8

// seventh input
// size of vector: 7
// capacity of vector: 8

// eight input
// size of vector: 8
// capacity of vector: 8

// ninth input
// size of vector: 9
// capacity of vector: 16

// tenth input
// size of vector: 10
// capacity of vector: 16

// printing fist element using front function: 10
// printing last element using back function: 100
// using normal for loop 
// 10 20 30 40 50 60 70 80 90 100 
// using range wise for loop 
// 10 20 30 40 50 60 70 80 90 100 
// traversing using iterater 
// 10 20 30 40 50 60 70 80 90 100 
// [Done] exited with code=0 in 1.118 seconds

// [Running] cd "d:\DSA_PRACTICE\STL\" && g++ vector.cpp -o vector && "d:\DSA_PRACTICE\STL\"vector
// first input
// size of vector: 1
// capacity of vector: 1

// second input
// size of vector: 2
// capacity of vector: 2

// third input
// size of vector: 3
// capacity of vector: 4

// fourth input
// size of vector: 4
// capacity of vector: 4

// fifth input
// size of vector: 5
// capacity of vector: 8

// sixth input
// size of vector: 6
// capacity of vector: 8

// seventh input
// size of vector: 7
// capacity of vector: 8

// eight input
// size of vector: 8
// capacity of vector: 8

// ninth input
// size of vector: 9
// capacity of vector: 16

// tenth input
// size of vector: 10
// capacity of vector: 16

// printing fist element using front function: 10
// printing last element using back function: 100
// using normal for loop 
// 10 20 30 40 50 60 70 80 90 100 
// using range wise for loop 
// 10 20 30 40 50 60 70 80 90 100 
// traversing using iterater 
// 10 20 30 40 50 60 70 80 90 100 .