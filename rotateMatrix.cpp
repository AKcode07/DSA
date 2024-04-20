#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        for(int i=0;i<row; i++){
            for(int j=0; j<=i;j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i=0;i<row;i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }


//Allocating new matrix

// void rotate(vector<vector<int>>& matrix) {
//         int n=matrix.size();
//         vector<vector<int>> ans(n,vector<int>(n,0));
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 ans[j][n-i-1]=matrix[i][j];
//             }
//         }
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 matrix[i][j]=ans[i][j];
//             }
//         }
//     }


int main(){
    vector<vector<int>> arr(4,vector<int>(4,0));
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<"Enter Elements at arr["<<i<<"]["<<j<<"]"<<endl;
            cin>>arr[i][j];
        }
    }
    rotate(arr);
    
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }

    return 0;
}