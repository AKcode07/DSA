#include <iostream>
using namespace std;

long long int Binarysearchsqrt(int x)
{
    int s = 0;
    int e = x;
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;
    while (s <= e)
    {
        long long int sq = mid * mid;
        if (sq == x)
        {
            return mid;
        }
        if (sq < x)
        {
            ans = mid;
            s = mid + 1;
        }
        else
            e = mid - 1;

        mid = s + (e - s) / 2;
    }
    return ans;
}

double morepresision(int x, int pre, int temp)
{
    double factor = 1;
    double ans = temp;
    for (int i = 0; i < pre; i++)
    {
        factor /= 10;
        for (double j = ans; j * j < x; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int x;
    cout << "Enter the no. :" << endl;
    cin >> x;
    int temp = Binarysearchsqrt(x);
    cout << "Square Root is: " << morepresision(x, 3, temp) << endl;
    return 0;
}