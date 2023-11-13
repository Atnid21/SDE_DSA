#include<iostream>
using namespace std;

int main(){
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; // a matrix is created of 3 X 3
    // ! row are 3 and column are 3

     // can also be initialized like this
    int matrix2 [3][3] = {1,2,3,4,5,6,7,8,9};
    
    for(int i=0;i<=2;++i){ // row
        for(int j=0;j<=2;++j){ // column
            cout<<matrix2[i][j]<<" ";
        }
        cout<<endl;
    }

}