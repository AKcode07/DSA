//Use When array size is less...
// Unstable
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

// void sortColors(vector<int>& nums) {
//         for(int i=0;i<nums.size();i++){
//             int minindex= i;
//             for(int j=i+1;j<nums.size();j++){
//                 if(nums[j]<nums[minindex])
//                     minindex=j;
//         }
//         swap(nums[minindex],nums[i]);
//     }
// };


void sortColors(vector<int>& nums,int start,int n) {


    if(start>=n){
        return;
    }
    int minIndex = start;
    for (int i = start + 1; i <= n; i++)
    {
        if (nums[i] < nums[minIndex])
        {
            minIndex = i;
        }
    }
    swap(nums[minIndex], nums[start]);

    sortColors(nums, start + 1, n);
};



int main(){
    vector<int> a={23,43,5,45,656,2};

    // sortColors(a);
    sortColors(a,0,5);

    for(auto i:a)
        cout<<i<<endl;

    return 0;
}