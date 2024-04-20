//Adaptable
// Stable
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {
        // for round 1 to n-1
        for(int i=1;i<nums.size();i++){
            int j=i-1;
            int temp=nums[i];
            for(;j>=0;j--){
                if(nums[j]>temp){
                    // Shift to right
                    nums[j+1]=nums[j];
                }
                else
                    break;
        }
        nums[j+1]=temp;
    }
};

int main(){
    vector<int> a={23,43,5,45,656,2};

    sortColors(a);

    for(auto i:a)
        cout<<i<<endl;

    return 0;
}