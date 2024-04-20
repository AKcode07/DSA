// DEC TO BIN
// Works in online complier
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter Decimal:";
    cin >> n;

    int ans = 0;
    int i = 0;
    int DIGIT = 1;
    while (n)
    {
        int bit = n & 1;
        ans += (bit * DIGIT);
        n = n >> 1;
        DIGIT *= 10;
        i++;
    }

    cout << ans << endl;
    return 0;
}

// BIN TO DEC
// #include <iostream>
// #include <math.h>

// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter Binary:";
//     cin >> n;

//     int ans = 0;
//     int i = 0;

//     while (n)
//     {
//         int bit = n % 10;
//         ans += (bit * pow(2, i));
//         n = n / 10;
//         i++;
//     }

//     cout << ans << endl;
//     return 0;
// }