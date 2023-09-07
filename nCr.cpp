#include <iostream>
using namespace std;

int fact(int n)
{
    int ans = 1;
    while (n)
    {
        ans *= n;
        n--;
    }
    return ans;
}

void nCr1()
{
    int n, r;
    cout << "Enter N and R:" << endl;
    cin >> n >> r;
    int ans = fact(n) / (fact(r) * fact(n - r));
    cout << "nCr is: " << ans << endl;
}

int main()
{
    nCr1();

    return 0;
}