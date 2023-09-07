#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;
    m[1] = "AK";
    m[4] = "PK";
    m[2] = "DK";
    m.insert({3, "HK"});
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << "3 Present : " << m.count(3) << endl;
    m.erase(3);
    cout << "After Erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;
    auto it = m.find(2);
    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << " " << (*i).second << endl;
    }
    return 0;
}