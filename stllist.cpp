#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> d;
    list<int> a(5, 100);
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    d.push_front(1);
    d.push_back(2);
    d.push_back(3);
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    d.erase(d.begin());
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    // push back or front, pop front or back
    cout << "Size :" << d.size() << endl;
    return 0;
}