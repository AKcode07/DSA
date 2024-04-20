#include<iostream>
using namespace std;

int main(){
    int num=4;
    cout<<num<<endl;
    cout<<"Address of num is: "<<&num<<endl;

    int *p=&num;
    cout<<"Address of num is: "<<p<<endl;
    cout<<"VALUE of num is: "<<*p<<endl;

    double d=2.3;
    double *t=&d;

    cout<<"Address of num is: "<<t<<endl;
    cout<<"VALUE of num is: "<<*t<<endl;
    cout<<"Size of pointer: "<<sizeof(p)<<endl;

    //copying the pointer
    int *q=p;
    cout<<p<<"--"<<q<<endl;
    cout<<*p<<"--"<<*q<<endl;

    return 0;
}