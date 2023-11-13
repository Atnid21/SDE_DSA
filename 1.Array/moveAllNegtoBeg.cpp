// Move all negative numbers at beginning and all positive numbers at end with constant space


#include<bits/stdc++.h>
using namespace std;


vector<int> moveNegativeAndPositve(vector<int>&vec){

    int size= vec.size();
    int i =0;
    int j=size-1;

    while(i<j){
        if(vec[i]<0) i++;
        else if(vec[j]>0) j--;
        else if(vec[i]>=0 && vec[j]<0)
        {
            int temp = vec[i];
            vec[i]=vec[j];
            vec[j]=temp;
            i++;
            j--;
        }
    }
    return vec;
}



void printArray(vector<int>&vec){
    for(int i=0;i<vec.size();++i){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}






int main(){

    vector<int>vec = {1,-2,3,-4,-5,5,-2,3};

    printArray(vec);
    cout<<endl;
    moveNegativeAndPositve(vec);
    printArray(vec);
}