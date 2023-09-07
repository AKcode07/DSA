#include <iostream>
using namespace std;
int binarysearch(int a[], int size, int n)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        //********IMP*********
        // For 2^31-1 value;
        int mid = start + (end - start) / 2;
        // int mid = (start + end) / 2;
        if (n == a[mid])
            return mid;
        if (n > a[mid])
            start = mid + 1;
        if (n < a[mid])
            end = mid - 1;
    }
    return -1;
}
int main()
{
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int b[9] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    // cout << "Enter 10 elements: " << endl;
    // for (auto i = 0; i < 10; i++)
    // {
    //     cin >> a[i];
    // }
    // int n;
    // cout << "Enter Element to be Searched: " << endl;
    // cin >> n;
    int index = binarysearch(a, 10, 4);
    cout << "No. present at: " << index << endl;
    int index2 = binarysearch(b, 9, 10);
    cout << "No. present at: " << index2 << endl;
    return 0;
}
