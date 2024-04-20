#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return (fibonacci(n - 1) + fibonacci(n - 2));
}

bool isSorted(int *arr,int size){
    if (size == 0 || size == 1)
        return true;
    
    if(arr[0]>arr[1])
        return false;
    else
        return isSorted(arr + 1, size - 1);
}

int sum(int *arr, int size){
    if(size==0)
        return 0;
    if (size == 1)
        return arr[0];

    int remainingpart = sum(arr + 1, size - 1);

    return arr[0] + remainingpart;
}

int factorial(int a)
{
    if (a == 0)
        return 1;
    return a * factorial(a - 1);
}

bool ispresent(int *arr, int num, int size)
{
    if (size == 0)
        return false;
        
    if (arr[0] == num)
        return true;

    return ispresent(arr + 1, num, size - 1);
}

bool binarysearch(int *arr, int num, int start, int end)
{


    if (start > end)
        return false;

    int mid = start + (end - start) / 2;
    if (arr[mid] == num)
        return true;


    if (arr[mid] > num)
        return binarysearch(arr,num,0,mid-1);
    if (arr[mid] < num)
        return binarysearch(arr, num, mid+1,end);
    ;
}

int ApowerB(int a,int b){
    if(b==1){
        return a;
    }
    if(b==0){
        return 1;
    }
    int ans = (ApowerB(a, b / 2));
   
    if (b & 1)
    {
        return a * ans * ans;
    }
    else
    {
        return ans * ans;
    }
}

int main()
{

    cout << factorial(5) << endl;
    cout << fibonacci(8) << endl;
    int arr[8] = {1, 2, 3, 4, 5, 6, 6, 7};
    cout << isSorted(arr, 8)<<endl;
    cout << sum(arr, 8)<<endl;
    cout << ispresent(arr, 6, 8)<<endl;
    cout << binarysearch(arr, 5, 0 , 7)<<endl;

    int a = 2;
    int b = 10;
    cout << "A to power B = "<< ApowerB(a,b) << endl;

    return 0;
}