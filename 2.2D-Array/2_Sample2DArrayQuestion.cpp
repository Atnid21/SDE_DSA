

#include<iostream>
using namespace std;

int main(){
   
    int r,c;
    cin>>r;
    cin>>c;
    int totalSum=0;

    int matrix[r][c];
    for(int row=0;row<r;++row){
        for(int col=0;col<c;++col){
            cin>>matrix[row][col];
        }
    }





// Write a program to store roll no and marks obtained
// by 4 student side by side in a matrix 
/*

    for(int row=0;row<roll_no;++row){
        for(int col=0;col<marks;++col){
            cout<<matrix[row][col]<<" ";
        }
        cout<<endl;
    }


}
*/


// Write a cpp program to find largest element 
// 2D array of integers


//     for(int row=0;row<r;++row){
//         for(int col=0;col<c;++col){
//             maxNumber = max(maxNumber,matrix[row][col]);
//         }
//     }

//     cout<<maxNumber;



// }



// Program to add two matrix

    int r1,c1;
    cin>>r1>>c1;

    int matrix2 [r1][c1];


    for(int row=0;row<r1;++row){
        for(int col=0;col<c1;++col){
              cin>>matrix2[row][col];
        }
    }


    for(int row=0;row<r;++row){
        for(int col=0;col<c;++col){
          cout<<matrix[row][col]+matrix2[row][col]<<" ";
        }
    }

    cout<<endl;

}
