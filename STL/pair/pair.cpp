#include<iostream>
#include<utility>
using namespace std;
int main(){

    pair<string,int> p={"Vidhi",100};//pair container storing pair of 
                                    //different type od data
    cout<<p.first<<" "<<p.second<<endl;

    pair<string,int> student[5]=//array of pair
                {{"Vidhi",100},{"Nidhi",95},{"Jiya",100},{"Rounak",75},{"Pragati",80}};

                //normal way we use for arrays
    for (int i = 0; i < 5; i++)
    {
            cout<<student[i].first<<" "<<student[i].second<< endl;
    }
    
    //lets try range based for loop
    //this is same as for each loop in which it assigns variable of
    //  same data type as that perticuler container or array and store one by one elements 
    //  value in that variable it iterats through all element of containe wether it supports
    //   iterator or not 
      for (auto s :student)
    {
               cout<<s.first<<" "<<s.second<< endl;

    }
    

    pair<int,pair<int,int>> nest={10,{20,30}};//nested pair
    cout<<nest.first<<" "<<nest.second.first<<" "<<nest.second.second;
    return 0;
}
//first ----

    // pair<string,int> student[5]=//array of pair
    //             {{"Vidhi",100},{"Nidhi",95},{"Jiya",100},{"Rounak",75},{"Pragati",80}};
    // for(auto it=student[0][0];it<=student[4][4];it++){

    // }                    ❌❌❌

    //i tried to iterate pair in wrong way 
    //right ways are above in program
    //Vidhi 100
// Nidhi 100
// Nidhi 95
// Nidhi 100
// Nidhi 75
// Nidhi 80
// Vidhi 100
// Nidhi 95
// Jiya 100
// Rounak 75
// Pragati 80
// 10 20 30