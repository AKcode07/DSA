#include <iostream>
using namespace std;

void print(int *p){
    cout<<*p<<endl;
}

int main()
{
    int arr[10];

    // cout<<"Address of 1st element: "<<arr<<endl;
    // cout<<"Address of 1st element: "<<&arr[0]<<endl;
    // cout<<"Address of 2nd element: "<<&arr[1]<<endl;
    // cout<<"1st element: "<<*arr<<endl;
    // // i[arr]=*(i+arr);
    // int i=2;
    // cout<<i[arr]<<endl;

    // cout<<sizeof(arr)<<endl;
    // int *p=&arr[0];
    // cout<<sizeof(p)<<endl;
    // cout<<sizeof(*p)<<endl;
    // cout<<sizeof(&p)<<endl;

    char ch[6] = {"abcde"};
    cout << arr << endl;
    // Diffrent implementation in cout
    cout << ch << endl;
    char *c = &ch[0];
    // prints entire array
    cout << c << endl;

    // char temp='z';
    // char *t=&temp; 
    // cout<<t<<endl;

    int value=5;
    int *pp=&value;
    print(pp);


    return 0;
}