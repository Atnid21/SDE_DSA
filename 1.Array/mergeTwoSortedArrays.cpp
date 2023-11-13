#include<bits/stdc++.h>
using namespace std;


vector<int>  mergeTwoSorted(vector<int>arr1,vector<int>arr2){

    int i=0,j=0,k=0;
    int n=arr1.size();
    int m= arr2.size();
    vector<int>res(n+m);

    while(i<=n-1 && j<=m-1){
        if(arr1[i]<arr2[j]){
            res[k]=arr1[i];
            i++;
        }
        else{ // arr[j]<arr[i]
            res[k]=arr2[j];
            j++;
        }
        k++;
    }

    // remaining elements

    if(i==n){
        while(j<=m-1){
            res[k]=arr2[j];
            k++;
            j++;
        }
    }
    if(j==m){ //j==m
        while(i<=n-1){
             res[k]=arr1[i];
            k++;
            i++;
        }
    }

    return res;

}







int main(){
    vector<int>arr1 ={0,1};
    vector<int>arr2 ={2,3,6,7,10};

    vector<int>arr3;

    arr3=mergeTwoSorted(arr1,arr2);
    for(int i=0;i<arr3.size();++i)
    cout<<arr3[i]<<" ";

    cout<<endl;
}