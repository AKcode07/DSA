#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// O(nlogn) 
void merge(vector<int> &nums, int s, int e)
{
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *sec = new int[len2];

    // Copy Values
    int mainindex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = nums[mainindex++];
    }
    mainindex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        sec[i] = nums[mainindex++];
    }

    // Merge 2 Sorted arrays
    int findex = 0;
    int sindex = 0;
    mainindex = s;
    while (findex < len1 && sindex < len2)
    {
        if (first[findex] <= sec[sindex])
            nums[mainindex++] = first[findex++];
        else
        {
            nums[mainindex++] = sec[sindex++];
        }
    }
    while (findex < len1)
    {
        nums[mainindex++] = first[findex++];
    }
    while (findex < len1 && sindex < len2)
    {
        nums[mainindex++] = sec[sindex++];
    }

    delete[] first;
    delete[] sec;
};

void MergeSort(vector<int> &nums, int s, int e)
{
    if (s >= e)
        return;
    int mid = s + (e - s) / 2;
    // Sort left part
    MergeSort(nums, s, mid);
    // Sort Right part
    MergeSort(nums, mid + 1, e);

    merge(nums, s, e);
};

int main()
{
    vector<int> a = {23, 43, 5, 45, 656, 2};

    // sortColors(a);
    MergeSort(a, 0, a.size() - 1);

    for (auto i : a)
        cout << i << endl;

    return 0;
}