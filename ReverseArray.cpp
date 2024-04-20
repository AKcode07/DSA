#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a={23,4,5,6,7,65};
    int s=0;
    int e=5;
    while(s<=e){
        swap(a[s],a[e]);
        s++;
        e--;
    }


    for(auto i:a){
        cout<<i<<endl;
    }

    return 0;
}   