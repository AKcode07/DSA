// ith largest element placed in ith round
//  OPTIMIZED
//  selection sort --  in every round the smallest value takes their correct place.
//  bubble sort - in every round the largest value takes their correct place.
//  Stable
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// void sortColors(vector<int> &nums)
// {
//     // for round 1 to n-1
//     for (int i = 1; i < nums.size(); i++)
//     {
//         bool optimize = false;
//         for (int j = 0; j <= (nums.size() - i); j++)
//         {
//             if (nums[j] > nums[j + 1])
//             {
//                 swap(nums[j + 1], nums[j]);
//                 optimize = true;
//             }
//         }
//         if (optimize == false)
//             break;
//     }
// };

void sortColors(vector<int> &nums, int n)
{
    if (n == 0 || n == 1)
        return;

    for (int i = 0; i < n-1; i++)
    {
            if (nums[i] > nums[i + 1])
            {
                swap(nums[i + 1], nums[i]);
            }
    }
    sortColors(nums,n-1);
};

int main()
{
    vector<int> a = {23, 43, 5, 45, 656, 2};

    // sortColors(a);
    sortColors(a,a.size());

    for (auto i : a)
        cout << i << endl;

    return 0;
}