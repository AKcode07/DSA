// same as BOOK ALLOCATION
#include<numeric>
#include<vector>
#include<iostream>
using namespace std;
bool ispossible(vector<int> &boards, int k,int mid){
    int tottime=0;
    int paintercount=1;
    for (auto i : boards) {
        if(tottime+i<=mid){
            tottime+=i;
        }
        else{
            paintercount++;
            if(paintercount>k||i>mid)
             return false;
            tottime=i;
            }
        }
    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int s=0;
    int sum=accumulate(boards.begin(),boards.end(),0);
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(ispossible(boards,k,mid)){
        ans=mid;
        e=mid-1;
        }
        else{
            s = mid+1;
        }
        mid=s+(e-s)/2;
    }



    return ans;
}
int main(){
    vector<int> a={10,20,30,40};
    cout<<findLargestMinDistance(a,2);
   return 0;
}