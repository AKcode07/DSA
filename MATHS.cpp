#include<iostream>
using namespace std;

bool isprime(int n){
    if(n<=1)
        return 0;
    for(int i=2;i<n;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}

int gcd(int a,int b){
    if(a==0)
        return b;
    if(b==0)
        return a;
    
    while(a!=b){
        if(a<b)
            b=b-a;
        else
            a=a-b;
    }


    return a;
}

int main(){
    // int n;
    // cout<<"Enter a number:"<<endl;
    // cin>>n;

    int a,b;
    cout<<"Enter a and b: "<<endl;
    cin>>a>>b;
    // if(isprime(n))
    //     cout<<"The number is Prime."<<endl;
    // else
    //     cout<<"The number is NOT Prime."<<endl;

    cout<<"GCD/HCF = "<<gcd(a,b)<<endl; 
    return 0;
}


//COUNT PRIMES
//SIEVE OF ERATOSTHENES

// class Solution {
// public:
//     int countPrimes(int n) {
//         int count=0;
//         vector<bool> prime(n+1, true);
//         prime[0]=prime[1]=false;

//         for(int i=2;i<n;i++){
//             if(prime[i]){
//                 count++;
//                 for(int j=2*i;j<n;j=j+i){
//                     prime[j]=false;
//                 }
//             }
//         }
//         return count;
//     }
// };