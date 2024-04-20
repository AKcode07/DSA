#include<iostream>
using namespace std;

void reverse(string& t,int s,int i){
    int e=i-1;
    while(s<=e){
        swap(t[s++],t[e--]);
    }
}

int main(){
    string s={'t','h','e',' ','n','u','t',' ','i','s',' ','y','o','u'};
    int start=0;
        for(int i=0;i<=s.length();i++){
            if((s[i] == ' ')||(s[i] == '\0')){
                reverse(s,start,i);
                start=i+1;
            }
        }
    cout<<s<<endl;
    return 0;
}