#include<iostream>
using namespace std;

bool ispresent(int arr[][3],int tar,int a,int b){
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(tar==arr[i][j])
                return 1;
        }
    }
    return 0;
}

void rowsum(int arr[][3],int a,int b){
    for(int i=0;i<a;i++){
        int sum=0;
        for(int j=0;j<b;j++){
            sum+=arr[i][j];
        }
        cout<<sum<<"    ";
    }
    cout<<endl;
}

int largestrowsum(int arr[][3],int a,int b){
    int lar=INT8_MIN;
    for(int i=0;i<a;i++){
        int sum=0;
        for(int j=0;j<b;j++){
            sum+=arr[i][j];
        }
        lar=max(lar,sum);
    }
    return lar;
}

int main(){
    // int a,b=3;
    // cout<<"Enter no. of Rows an Columns: "<<endl;
    // cin>>a>>b;
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter Elements at arr["<<i<<"]["<<j<<"]"<<endl;
            cin>>arr[i][j];
        }
    }
    
    cout<<"Your 2d Array is: "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    int tar;
    cout<<"Enter Target: "<<endl;
    cin>>tar;

    if(ispresent(arr,tar,3,3))
        cout<<"Present"<<endl;
    else
        cout<<"Not Present"<<endl;

    cout<<"Row wise sum:"<<endl;
    rowsum(arr,3,3);

    int lar=largestrowsum(arr,3,3);
    cout<<"Largest Row wise sum:"<<lar<<endl;
    return 0;
}