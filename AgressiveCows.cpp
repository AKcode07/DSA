// same as BOOK ALLOCATION
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
bool ispossible(vector<int> &stalls, int k,int mid){
    int cowcount=1;
    int lastpos=stalls[0];
    for(auto i:stalls){
        if(i-lastpos>=mid){
            cowcount++;
            if(cowcount==k)
                return true;
            lastpos=i;
        }
      
    }
    return true;
}

int findLargestMinDistance(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int s=0;
    int max = *max_element(stalls.begin(), stalls.end());
    int min = *min_element(stalls.begin(), stalls.end());
    int e=max-min;
    int ans=-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(ispossible(stalls,k,mid)){
        ans=mid;
        s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;  
    }
    return ans;
}
int main(){
    vector<int> a={4,2,1,3,6};
    cout<<findLargestMinDistance(a,2);
   return 0;
}