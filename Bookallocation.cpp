// max no. of pages should be minimum in m students.
#include<vector>
#include<iostream>
using namespace std;


bool isPossiblesol(vector<int> arr,int n,int m,int mid){
    int studentcount=1;
    int pagesum=0;
    for (int i = 0; i <n; i++)
    {
        if(pagesum + arr[i]<=mid){
            pagesum += arr[i];
        }
        else{
            studentcount++;
            if(studentcount>m||arr[i]>mid){
                return false;
            }
            pagesum=arr[i];
        }
    }
    return true;
}


int allocationBooks(vector<int> arr,int n,int m){
    int s=0;
    int sum=0;
    for(auto i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(isPossiblesol(arr,n,m,mid)){
            ans=mid;    
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}

int main(){
    vector<int> a={10,20,30,40};
    cout<<allocationBooks(a,4,2)<<endl; 
    return 0;
}