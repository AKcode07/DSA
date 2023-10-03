#include <iostream>
#include <vector>

long long mergeAndCount(std::vector<int> &arr, std::vector<int> &temp, int left, int mid, int right)
{
    long long count = 0;

    int i = left;    // Index for the left subarray
    int j = mid + 1; // Index for the right subarray
    int k = left;    // Index for the merged array

    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            // If arr[i] is greater than arr[j], it's an inversion
            temp[k++] = arr[j++];
            count += mid - i + 1;
        }
    }

    // Copy the remaining elements from both subarrays
    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }

    while (j <= right)
    {
        temp[k++] = arr[j++];
    }

    // Copy elements back to the original array
    for (int p = left; p <= right; p++)
    {
        arr[p] = temp[p];
    }

    return count;
}

long long mergeSortAndCount(std::vector<int> &arr, std::vector<int> &temp, int left, int right)
{
    long long count = 0;
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        // Count inversions in the left subarray
        count += mergeSortAndCount(arr, temp, left, mid);

        // Count inversions in the right subarray
        count += mergeSortAndCount(arr, temp, mid + 1, right);

        // Count inversions during merging
        count += mergeAndCount(arr, temp, left, mid, right);
    }
    return count;
}

long long countInversions(std::vector<int> &arr)
{
    int n = arr.size();
    std::vector<int> temp(n);
    return mergeSortAndCount(arr, temp, 0, n - 1);
}

int main()
{
    std::vector<int> arr = {1, 20, 6, 4, 5};
    long long inversions = countInversions(arr);

    std::cout << "Number of inversions: " << inversions << std::endl;

    return 0;
}
