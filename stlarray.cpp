#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 4> a = {1, 2, 3, 4};
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    cout << "At 2: " << a.at(2) << endl;
    cout << "Empty or not:" << a.empty() << endl;
    cout << "At First: " << a.front() << endl;
    cout << "At Last: " << a.back() << endl;
    return 0;
}