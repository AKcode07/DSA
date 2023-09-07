#include <iostream>
using namespace std;

int main()
{
    // int a = 4, b = 6;
    // cout << (a & b) << endl;
    // cout << (a | b) << endl;
    // cout << ~a << endl;
    // cout << (a ^ b) << endl;
    // cout << (a << 1) << endl;
    // cout << (a >> 1) << endl;
    // cout << (b << 2) << endl;

    // Fibonnaci
    // int p = 0, q = 1;
    // cout << p << " " << q << " ";
    // for (int i = 1; i <= 10; i++)
    // {
    //     int x = p + q;
    //     cout << x << " ";
    //     p = q;
    //     q = x;
    // }

    // Prime
    bool isprime = 1;
    cout << "Enter no.:";
    int w;
    cin >> w;
    for (int i = 2; i < w; i++)
    {
        if (w % i == 0)
        {
            isprime = 0;
            break;
        }
    }
    if (isprime == 0)
        cout << "Not Prime" << endl;
    else
        cout << "Prime :)" << endl;
    return 0;
}