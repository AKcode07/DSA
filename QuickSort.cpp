#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int partition(vector <int> &nums, int s, int e)
{
    int pivot = nums[s];

    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (nums[i] <= pivot)
            count++;
    }
    // place pivot element
    int index = s + count;
    swap(nums[index], nums[s]);

    // left and right part yo |<a| a |>a|
    int i = s;
    int j = e;

    while (i < index && j > index)
    {
        while (nums[i] <= nums[index])
            i++;
        while (nums[j] > nums[index])
            j--;
        if (i <index && j>index)
            swap(nums[i++], nums[j--]);
    }
    return index;
}

void Quicksort(vector <int> &nums, int s, int e)
{
    if (s >= e)
        return;

    int p = partition(nums, s, e);

    // Sort left part
    Quicksort(nums, s, p - 1);
    // Sort Right part
    Quicksort(nums, p + 1, e);
}

int main()
{
    vector<int> a = {23, 43, 5, 45, 656, 2,2,2,2,2};

    // sortColors(a);
    Quicksort(a, 0,9);

    for (auto i : a)
        cout << i << endl;
    return 0;
}