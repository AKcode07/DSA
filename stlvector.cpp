#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    vector<int> a(5, 2);
    vector<int> b(a);
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    for (int i : b)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Capacity: " << v.capacity() << endl;
    v.push_back(1);
    cout << "Capacity: " << v.capacity() << endl;
    v.push_back(2);
    cout << "Capacity: " << v.capacity() << endl;
    v.push_back(3);
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;
    cout << "At 2 : " << v.at(2) << endl;
    cout << "At First: " << v.front() << endl;
    cout << "At Last: " << v.back() << endl;
    v.pop_back();
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    v.clear();
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
