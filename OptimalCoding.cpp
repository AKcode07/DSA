#include<iostream>
using namespace std;

//Macros
//use no memory and replace all values at compilation time
#define pi 3.14

// no extra memory usage and no extra memory call
inline int getmax(int& a,int &b){
    return (a<b) ? b:a;
}

int main(){
    int r=9;
    double area=pi*r*r;
    cout<<area<<endl;

    int a=2,b=4;
    cout<<getmax(a,b);

    return 0;
}