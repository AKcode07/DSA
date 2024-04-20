#include <iostream>
using namespace std;

int main()
{
    int a[6] = {1,
                2,
                3,
                4,
                5, 6};
    for (int i = 0; i < 6; i += 2)
    {
        if (i + 1 < 6)
        {
            swap(a[i], a[i + 1]);
            // int temp = a[i];
            // a[i] = a[i + 1];
            // a[i + 1] = temp;
        }
    }

    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}