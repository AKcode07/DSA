#include <iostream>
using namespace std;

int main()
{
    int i = 1, n;
    cout << "Enter n:";
    cin >> n;

    while (i <= n)
    {
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j;
            j += 1;
        }

        int sp = (i - 1) * 2;
        while (sp)
        {
            cout << "*";
            sp--;
        }

        int k = n - i + 1;
        while (k)
        {
            cout << k;
            k--;
        }
        i += 1;
        cout << endl;
    }

    // while (i <= n)
    // {
    //     int sp = n - i;
    //     while (sp)
    //     {
    //         cout << " ";
    //         sp--;
    //     }

    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << j;
    //         j += 1;
    //     }
    //     int k = 1;
    //     while (k <= i - 1)
    //     {
    //         cout << k;
    //         k++;
    //     }
    //     i += 1;
    //     cout << endl;
    // }

    // while (i <= n)
    // {
    //     int sp = i - 1;
    //     while (sp)
    //     {
    //         cout << " ";
    //         sp--;
    //     }

    //     int j = 1;
    //     while (j <= n - i + 1)
    //     {
    //         cout << i + j - 1;
    //         j += 1;
    //     }
    //     i += 1;
    //     cout << endl;
    // }

    // while (i <= n)
    // {
    //     int sp = n - i;
    //     while (sp)
    //     {
    //         cout << " ";
    //         sp--;
    //     }

    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << i;
    //         j += 1;
    //     }
    //     i += 1;
    //     cout << endl;
    // }

    // while (i <= n)
    // {
    //     int sp = i - 1;
    //     while (sp)
    //     {
    //         cout << " ";
    //         sp--;
    //     }

    //     int j = 1;
    //     while (j <= n - i + 1)
    //     {
    //         cout << i;
    //         j += 1;
    //     }
    //     i += 1;
    //     cout << endl;
    // }

    // while (i <= n)
    // {
    //     int sp = i - 1;
    //     while (sp)
    //     {
    //         cout << " ";
    //         sp--;
    //     }

    //     int j = 1;
    //     while (j <= n - i + 1)
    //     {
    //         cout << "*";
    //         j += 1;
    //     }
    //     i += 1;
    //     cout << endl;
    // }

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n - i + 1)
    //     {
    //         cout << "*";
    //         j += 1;
    //     }
    //     i += 1;
    //     cout << endl;
    // }

    // while (i <= n)
    // {
    //     int sp = n - i;
    //     while (sp)
    //     {
    //         cout << " ";
    //         sp--;
    //     }
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << "*";
    //         j += 1;
    //     }
    //     i += 1;
    //     cout << endl;
    // }

    // while (i <= n)
    // {
    //     int j = 1;
    //     char ch = 'A' + n - i;
    //     while (j <= i)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //         j += 1;
    //     }
    //     i += 1;
    //     cout << endl;
    // }

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << char('A' + i + j - 2) << " ";
    //         j += 1;
    //     }
    //     i += 1;
    //     cout << endl;
    // }

    // char ch = 'A';
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << ch << " ";
    //         j += 1;
    //         ch++;
    //     }
    //     i += 1;
    //     cout << endl;
    // }

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << char('A' + j - 1) << " ";
    //         j += 1;
    //     }
    //     i += 1;
    //     cout << endl;
    // }

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << char('A' + i - 1) << " ";
    //         j += 1;
    //     }
    //     i += 1;
    //     cout << endl;
    // }

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << i - j + 1 << " ";
    //         j += 1;
    //     }
    //     i += 1;
    //     cout << endl;
    // }

    // while (i <= n)
    // {
    //     int j = 1;
    //     int a = i;
    //     while (j <= i)
    //     {
    //         cout << a << " ";
    //         a--;
    //         j += 1;
    //     }
    //     i += 1;

    //     cout << endl;
    // }

    // while (i <= n)
    // {
    //     int j = i;
    //     while (j < 2 * i)
    //     {
    //         cout << j << " ";
    //         j += 1;
    //     }
    //     i += 1;

    //     cout << endl;
    // }

    // int count = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << count << " ";
    //         j += 1;
    //         count += 1;
    //     }
    //     cout << endl;
    //     i += 1;
    // }

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << i;
    //         j += 1;
    //     }
    //     cout << endl;
    //     i += 1;
    // }

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << "*";
    //         j += 1;
    //     }
    //     cout << endl;
    //     i += 1;
    // }

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << n - j + 1;
    //         j += 1;
    //     }
    //     cout << endl;
    //     i += 1;
    // }

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << j;
    //         j += 1;
    //     }
    //     cout << endl;
    //     i += 1;
    // }

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << i;
    //         j += 1;
    //     }
    //     cout << endl;
    //     i += 1;
    // }

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << "*";
    //         j += 1;
    //     }
    //     cout << endl;
    //     i += 1;
    // }
    return 0;
}