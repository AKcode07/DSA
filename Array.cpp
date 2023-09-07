#include <iostream>
using namespace std;

int main()
{
    // int array[100];
    // fill_n(array, 100, 1);
    // for (int i = 0; i <= 99; i++)
    // {
    //     cout << array[i] << endl;
    // }

    int arr[10];
    cout << "Enter 10 Elements:" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    int maxi = arr[0], mini = arr[0];
    // int maxi = INT_MIN;
    // int mini = INT_MAX;
    for (int i = 0; i < 10; i++)
    {
        maxi = max(maxi, arr[i]);
        mini = min(mini, arr[i]);
        // if (arr[i] > maxi)
        // {
        //     maxi = arr[i];
        // }
        // if (arr[i] < mini)
        // {
        //     mini = arr[i];
        // }
    }
    cout << "Min and Max are:" << mini << " & " << maxi << endl;
    return 0;
}