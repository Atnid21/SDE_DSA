
#include<bits/stdc++.h>
using namespace std;


void sortArray(vector<int>&vec){

    // Brute force 

    // int counter_0=0,counter_1=0,counter_2=0;

    // for(int i=0;i<vec.size();++i){
    //     if(vec[i]==0)
    //     counter_0++;
    //     else if(vec[i]==1)
    //     counter_1++;
    //    else if(vec[i]==2)
    //     counter_2++;

    // }

    // for(int i=0;i<counter_0;++i)
    //     vec[i]=0;
    // for(int i=counter_0;i<(counter_0+counter_1);++i)
    //     vec[i]=1;
    // for(int i=counter_0+counter_1;i<vec.size();++i)
    //     vec[i]=2;


    // Dutch Flag Algorithm

    int low=0, mid=0,high=vec.size()-1;

    while(mid<=high){
       
       if(vec[mid]==0){
        swap(vec[low],vec[mid]);
        low++;
        mid++;
       }
       else if(vec[mid]==1){
        mid++;
       }
       else{
        swap(vec[high],vec[mid]);
        high--;

       }
    }




}






int main(){
    vector<int> vec ={2,1,0,0,0,1,2};
    
    for(int i=0;i<vec.size();++i)
        cout<<vec[i]<<" ";
    
    cout<<endl;
    sortArray(vec);

    for(int i=0;i<vec.size();++i)
        cout<<vec[i]<<" ";
}