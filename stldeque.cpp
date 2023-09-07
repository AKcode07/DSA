#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_front(1);
    d.push_back(2);
    d.push_back(3);
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    // d.pop_front();
    // d.pop_back();
    // for (int i : d)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
    cout << d.at(2) << endl;
    cout << "At First: " << d.front() << endl;
    cout << "At Last: " << d.back() << endl;
    cout << "Empty or not:" << d.empty() << endl;
    cout << "Size before erase:" << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    // d.erase(d.begin(), d.end());
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Size after erase:" << d.size() << endl;

    return 0;
}